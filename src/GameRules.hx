package;

import roaming.enums.Attribute;
import hxassert.Assert;

enum BattleOutcome
{
    Win;
    Loss;
    Draw;    
}
/**
 * Contains game-rule constants and dependencies
 * @author Gulvan
 */
class GameRules
{

    public static var initialAbilityPoints:Int = 1;
    public static var initialAttributePoints:Int = 4;

    public static var basicHP:Int = 100;
    public static var basicMana:Int = 100;

    public static var treeWidth:Int = 4;
    public static var treeHeight:Int = 3;

    public static function xpToLvlup(currentLevel:Int):Int
	{
		Assert.assert(currentLevel > 0);
		var base1:Int = 30;
		var base2:Int = 100;
		if (currentLevel == 1)
			return 20;
		if (currentLevel <= 8)
			return base1 + 5 * (currentLevel - 2);
		else
			return base2 + 10 * (currentLevel - 9);
	}

    ///May depend on level in the future
    public static function abPointsLvlupBonus():Int
    {
        return 2;
    }

    ///May depend on level in the future
    public static function attPointsLvlupBonus():Int
    {
        return 4;
    }

    public static function attributeLvlupBonus(el:Element):Map<Attribute, Int>
    {
        return switch (el)
        {
            case Element.Lightning:
                [Attribute.Strength => 1,
                Attribute.Flow => 1,
                Attribute.Intellect => 6];
            default: [Attribute.Strength => 1, Attribute.Flow => 1, Attribute.Intellect => 1];
        };
    }

    public static function wheelSlotCount(level:Int):Int
    {
        return 8;
    }

    public static function hpStBonus(strength:Int):Int
    {
        return 10 * strength;
    }

    public static function ratingRewardPVP(outcome:BattleOutcome, ratingDifference:Int):Int
    {
        if (outcome == BattleOutcome.Win)
            return Math.round(Math.min(150, 25 + Math.abs(ratingDifference) / 2));
        else if (outcome == BattleOutcome.Loss)
            return -Math.round(Math.min(50, 25 + Math.abs(ratingDifference) / 4));
        else
            return 0;
    }

    public static function xpRewardPVP(outcome:BattleOutcome):Int
    {
        if (outcome == BattleOutcome.Win)
            return 50;
        else if (outcome == BattleOutcome.Draw)
            return 30;
        else
            return 10; 
    }

    public static function xpRewardPVE(outcome:BattleOutcome, isBoss:Bool):Int
    {
        if (outcome == BattleOutcome.Win)
        {
            if (isBoss)
                return 100;
            else
                return 50;
        }
        else if (outcome == BattleOutcome.Draw)
            return 25;
        else 
            return 5;
    }
}