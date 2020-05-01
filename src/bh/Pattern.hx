package bh;

import io.AdvancedJSONReader;
import ID.AbilityID;
import battle.enums.AbilityType;
import battle.enums.AbilityTarget;
import motion.easing.Linear;
import motion.easing.IEasing;
import json2object.JsonWriter;
import io.AbilityJSONParser;
import io.AbilityJSONParser.AbilityJSON;
import io.AbilityJSONParser.DanmakuPropsJSON;
import io.AbilityJSONParser.DanmakuVarJSON;
using Lambda;

typedef BHParamPrototype =
{
    name:String,
    lb:Null<Float>,
    rb:Null<Float>,
    intConstr:Bool
}

class Pattern
{
    public var variablePrototypes:Array<BHParamPrototype>;
    public var customEasing:Bool;
    public var objects:Array<PatternObject>;

    public inline function isEmpty():Bool
    {
        return Lambda.empty(objects);
    }

    public function toJson():String
    {
        var s:String = "";
        //TODO: implementation
        return s;
    }

    ///Creates an object with default parameters
    public function createObject(x:Float, y:Float)
    {
        var easing:Null<IEasing> = customEasing? Linear.easeNone : null;
        var params:Map<String, BHParameter> = [];
        for (proto in variablePrototypes)
        {
            var p = new BHParameter(proto.lb, proto.rb, proto.intConstr);
            params.set(proto.name, p);
        }
        objects.push(new PatternObject(x, y, params, easing));
    }

    ///Finds and removes object with given position
    public function removeObject(x:Float, y:Float)
    {
        for (o in objects)
            if (o.x == x && o.y == y)
            {
                objects.remove(o);
                break;
            }
    }

    public function new(variablePrototypes:Array<BHParamPrototype>, customEasing:Bool) 
    {
        this.variablePrototypes = variablePrototypes;
        this.customEasing = customEasing;
        objects = [];
    }

    public static function fromJson(s:String):Pattern
    {
        //TODO: implementation
        return null;
    }

    //Maybe move to server
    public static function firstTimeCreate(id:AbilityID):Pattern
    {
        var reader:AdvancedJSONReader = AbilityJSONParser.targetAbility(id);
        var customEasing:Bool = false;
        var prototypes:Array<BHParamPrototype> = [];
        reader.considerProperty("danmakuProps");

        if (reader.hasProperty("easing"))
            if (reader.parseAsString("easing") == "Custom")
                customEasing == true;

        if (reader.hasProperty("parameters"))
            for (param in reader.parseArray("parameters"))
            {
                var parameterReader:AdvancedJSONReader = new AdvancedJSONReader(param);
                var name:String = parameterReader.parseAsString("name");
                var lb:Null<Float> = parameterReader.hasProperty("leftBorder")? parameterReader.parseAsFloat("leftBorder") : null;
                var rb:Null<Float> = parameterReader.hasProperty("rightBorder")? parameterReader.parseAsFloat("rightBorder") : null;
                var intConstr:Bool = parameterReader.hasProperty("integer")? parameterReader.parseAsBool("integer") : false;
                prototypes.push({name: name, lb:lb, rb:rb,intConstr: intConstr});
            }
        return new Pattern(prototypes, customEasing);
    }
}