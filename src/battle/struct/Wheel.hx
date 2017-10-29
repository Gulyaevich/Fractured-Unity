package battle.struct;
import battle.Ability;
import hxassert.Assert;

/**
 * Ability wheel
 * @author Gulvan
 */
class Wheel 
{

	private var wheel:Array<Ability>;
	
	public var numOfSlots:Int;
	
	public function get(pos:Int):Ability
	{
		Assert.assert(pos >= 0 && pos <= 9);
		return wheel[pos];
	}
	
	public function set(pos:Int, ability:Ability):Ability
	{
		Assert.assert(pos >= 0 && pos <= 9);
		return wheel[pos] = ability;
	}
	
	public function tick()
	{
		for (ability in wheel)
			if (!ability.checkEmpty())
				ability.tick();
	}
	
	public function new(pool:Array<ID>, numOfSlots:Int) 
	{
		Assert.assert(pool.length <= numOfSlots && numOfSlots >= 8 && numOfSlots <= 10);
		
		this.wheel = new Array<Ability>();
		for (id in pool)
			this.wheel.push(new Ability(id));
		for (i in pool.length...numOfSlots)
			this.wheel[i] = new Ability(ID.EmptyAbility);
		for (i in numOfSlots...10)
			this.wheel[i] = new Ability(ID.LockAbility);
		this.numOfSlots = numOfSlots;
	}
	
}