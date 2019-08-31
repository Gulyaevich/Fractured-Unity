package battle;
import battle.enums.AbilityType;
import battle.enums.StrikeType;
import battle.struct.UnitCoords;
import battle.struct.UnitData;
import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.filters.GlowFilter;
using Listeners;
/**
 * Vision of bottom battle bar with ability icons
 * @author Gulvan
 */
class AbilityBar extends SSprite 
{
	
	private var bottomBar:DisplayObject;
	private var skipTurn:TurnTimer;
	private var leaveBattle:DisplayObject;
	private var abilitiesVision:Array<AbilityCell>;
	private var selectFilter:Sprite;
	
	public function new(wheel:Array<Ability>) 
	{
		super();	
		
		bottomBar = new BottomBattleBar();
		skipTurn = new TurnTimer();
		leaveBattle = new LeaveBattle();
		abilitiesVision = [for (i in 0...10) new AbilityCell(wheel[i], "" + (i + 1))];
	}
	
	private static var TIMER_X:Float = 682;
	private static var ABILITY_Y:Float = 30;
	private static var CELL_W:Float = 56;
	private static var TIMER_R:Float = 40;
	
	public function init()
	{		
		add(bottomBar, 0, 0);
		add(skipTurn, TIMER_X, 62);
		add(leaveBattle, 1320, -513);
		
		for (i in 0...10)
			add(abilitiesVision[i], abilityX(i), ABILITY_Y);
			
		skipTurn.addVocalListener(MouseEvent.CLICK, skipHandler, 1);
		leaveBattle.addVocalListener(MouseEvent.CLICK, leaveHandler, 1);
	}
	
	public function deInit()
	{
		skipTurn.removeVocalListener(MouseEvent.CLICK, 1);
		leaveBattle.removeVocalListener(MouseEvent.CLICK, 1);
	}
	
	private static function abilityX(i:Int):Float
	{
		if (i < 5)
			return abilityOffset() * (i + 1) + CELL_W * i;
		else
			return Main.screenW - (abilityOffset() + CELL_W) * (10 - i);
	}
	
	private static function abilityOffset():Float
	{
		return (Main.screenW / 2 - TIMER_R - 5 * CELL_W) / 6;
	}
	
	public function tick():Void 
	{
		for (a in abilitiesVision)
			a.decrementCooldown();
	}
	
	public function turn():Void 
	{
		skipTurn.redraw(true);
	}
	
	public function abSelected(num:Int):Void 
	{
		selectFilter = new SelectAbMask();
		add(selectFilter, abilityX(num), ABILITY_Y);
	}
	
	public function abDeselected(num:Int):Void 
	{
		remove(selectFilter);
		selectFilter = null;
	}
	
	///SHOULD ONLY BE USED IF CASTER IS PLAYER (updates cd on ability icon)
	public function ownAbThrown(id:ID):Void 
	{
		for (a in abilitiesVision)
			if (a.id == id)
			{
				a.renewCooldown();
				break;
			}
		skipTurn.redraw(false);
	}
	
	private function skipHandler(e:MouseEvent)
	{
		if (selectFilter != null && selectFilter.stage != null)
		{
			remove(selectFilter);
			selectFilter = null;
		}
		skipTurn.redraw(false);
		ConnectionManager.skipTurn();
	}
	
	private function leaveHandler(e:MouseEvent)
	{
		ConnectionManager.quit();
	}
	
}