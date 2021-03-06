package graphic.components.mainmenu;

import ConnectionManager.BattleData;
import graphic.components.abilityscreen.SAbility;
import graphic.components.mainmenu.quickbar.QuickBarItem.ItemName;
import graphic.components.mainmenu.quickbar.QuickBarItem.QuickBarStyle;
import graphic.components.mainmenu.quickbar.QuickBar;
import openfl.display.Sprite;

enum Screen
{
	Main;
	Character;
}

class MainMenuCoordinator extends Sprite
{
    private var quickBar:QuickBar;
	private var screen:Sprite;
	private var screenType:Screen;

	public var matchFoundCallback:BattleData->Void;

	public function initMain() 
	{
		screen.removeChildren();
		screen.addChild(new MainScreen(matchFoundCallback));
		screenType = Main;
	}

	private function initCharScreen() 
	{
		screen.removeChildren();
		screen.addChild(new SAbility(()->{quickBar.visible = false;}, ()->{quickBar.visible = true;}));
		screenType = Character;
	}

    public function new()
    {
		super();
		screen = new Sprite();
        quickBar = new QuickBar(QuickBarStyle.MainScreen, [MainScreen => initMain, Character => initCharScreen], popupTease);
        addChild(screen);
        addChild(quickBar);
	}

	private function popupTease(item:ItemName) 
	{
		var popup:TextWindow = new TextWindow(new RichString(''), []);
		var text:String = switch item {
			case Inventory: "Items, loot and inventory are coming in &008000[alpha 6.1]. Stay tuned!";
			case WorldMap: "PvE campaign and dungeons are coming in &008000[alpha 6.0]. Stay tuned!";
			case Challenge: "Bossfights are coming in &008000[alpha 5.0]. Stay tuned!";
			default: "Unexpected pop-up";
		};

        function onClose()
        {
            removeChild(popup);
		}
		
        popup = new TextWindow(new RichString(text), PopUpMessage, [Cross(onClose)]);
        addChild(popup);
	}
	
	/*private function displayPromo()
	{
		displayMap["promo"] = new PromoA23();
		displayMap["promoClose"] = new ClosePromoCross();
		displayMap["promo"].centre();
		Sounds.INFO_APPEAR.play();
		addChild(displayMap["promo"]);
		this.add(displayMap["promoClose"], displayMap["promo"].x + 426, displayMap["promo"].y + 5.5);
		stage.addEventListener(MouseEvent.CLICK, closePromo);
	}

	private function closePromo(e:MouseEvent)
	{
		if (new Point(e.stageX, e.stageY).inside(displayMap["promoClose"].getBounds(stage)))
		{
			stage.removeEventListener(MouseEvent.CLICK, closePromo);
			Sounds.CLICK.play();
			Sounds.WINDOW_CLOSE.play();
			removeChild(displayMap["promo"]);
			removeChild(displayMap["promoClose"]);
			addRoamListeners();
		}
	}*/
}