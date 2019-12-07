package graphic.components.abilityscreen;

import openfl.display.MovieClip;
import openfl.display.Sprite;
import openfl.geom.Point;
import openfl.display.JointStyle;
import openfl.display.CapsStyle;
import openfl.events.MouseEvent;
import openfl.display.DisplayObject;

class BHPreview extends SSprite
{

    private var btn1:PatternChooseBtn1;
    private var btn2:PatternChooseBtn2;
    private var btn3:PatternChooseBtn3;
    private var editBtn:EditPatternBtn;
    private var previewBox:SSprite;
    private var preview:SSprite;
    private var selectedArrow:SelectedPatternArrow;
    private var abIcon:DisplayObject;

    private var ability:ID;
    private var selectedPattern:Int;

    private function selectPattern(num:Int, e)
    {
        selectedPattern = num;
        selectedArrow.x = 458 + (num - 1) * 45; 
        redrawPreview();
    }

    private function initEditor(e)
    {

    }

    private function redrawPreview()
    {
        function cb(xml:Xml)
        {
            var pts:Array<Point> = [for (particle in xml.elementsNamed("particle")) new Point(Std.parseFloat(particle.get("x")), Std.parseFloat(particle.get("y")))];
            var min:Point = pts[0];
            var max:Point = min;
            for (p in pts)
            {
                if (p.x < min.x)
                    min.x = p.x;
                else if (p.x > max.x)
                    max.x = p.x;
                if (p.y < min.y)
                    min.y = p.y;
                else if (p.y > max.y)
                    max.y = p.y;
            }
            for (p in pts)
                preview.add(Assets.getParticle(ability), p.x-min.x+2.5, p.y-min.y+2.5);

            preview.scaleX = 745/(max.x - min.x);
            preview.scaleY = 345/(max.y - min.y);
        }

        remove(preview);
        preview = new SSprite();
        add(preview, 595, 370);
        ConnectionManager.getBHPatternByID(ability, selectedPattern, cb);
    }

    public function changeAbility(newAb:ID)
    {
        ability = newAb;
        remove(abIcon);
        abIcon = Assets.getBattleAbility(ability);
        add(abIcon, 485, 390);
        selectPattern(0, null);
    }

    public function new()
    {
        super();
        selectedPattern = 1;
        btn1 = new PatternChooseBtn1();
        btn2 = new PatternChooseBtn2();
        btn3 = new PatternChooseBtn3();
        editBtn = new EditPatternBtn();
        previewBox = new SSprite();
        preview = new SSprite();
        selectedArrow = new SelectedPatternArrow();
        ability = ID.EmptyAbility;
        abIcon = new NoAbility();
        previewBox.graphics.lineStyle(5, 0xDDDDDD, 1, false, null, CapsStyle.SQUARE, JointStyle.MITER);
        previewBox.graphics.beginFill(0x111111);
        previewBox.graphics.drawRect(0, 0, 750, 350);
        previewBox.graphics.endFill();
        add(btn1, 449, 464);
        add(btn2, 494, 464);
        add(btn3, 538, 464);
        add(editBtn, 450, 560);
        add(abIcon, 485, 390);
        add(selectedArrow, 458, 522);
        add(previewBox, 595, 370);
        add(preview, 595, 370);
        btn1.addEventListener(MouseEvent.CLICK, selectPattern.bind(1));
        btn2.addEventListener(MouseEvent.CLICK, selectPattern.bind(2));
        btn3.addEventListener(MouseEvent.CLICK, selectPattern.bind(3));
        editBtn.addEventListener(MouseEvent.CLICK, initEditor);
    }
}