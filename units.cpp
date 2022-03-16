/*

 */


#include "units.h"



#include "balance.h"
#include "items.h"

#include "manager.h"


Troop::Troop(int x)
{
    a = x;
}

int Troop::get()
{
    return a;
}

// UNIT

Unit::Unit()
{
    STR = 1;
    AG = 1;
    INT = 1;

    HP = 1;
    max_HP = HP;

    level = 1;

    artefact = false;

    attack_speed = 1;

     // lists of dices used for fighting
    /*
       strategy = [[]]
       magic = [[]]
    */
}

void Unit::item_change()
{
/*
self.dice_pool = []
self.effects_pool = []
# adding item base pool of dices

for dice in self.artefact.base_pool:
    self.dice_pool.append(dice)

self.turn_pool = self.dice_pool.copy()

# adding item effect pool
for spell in self.artefact.magic_pool:
    self.effects_pool.append(spell)

self.generate_strategy()  # adding new dices to the strategy
 */
}

void Unit::generate_strategy()
{


/*
# adjusting attack speed
self.strategy = []
self.magic = []
for action in range(self.attack_speed):
    self.strategy.append([])
    self.magic.append([])

# place where strategy is generated
counter = 0
for i in range(len(self.turn_pool)):
    self.strategy[counter].append(self.turn_pool[i])
    counter += 1
    if counter == self.attack_speed:
        counter = 0

counter = 0
for i in range(len(self.effects_pool)):
    self.magic[counter].append(self.effects_pool[i])
    counter += 1
    if counter == self.attack_speed:
        counter = 0
 */
}

void Unit::effect()
{
/*
for spell in self.magic[action]:
            spell.use(dices)
 */
}

void Unit::printing_all_stats()
{
/*
print("STR: %d  AG: %d  INT: %d" % (self.STR, self.AG, self.INT))
        print("HP: %d MAX_HP: %d" % (self.HP, self.max_HP))
        print("Item base:", end=" ")
        print(self.dice_pool)
        print("Strategy:", end=" ")
        print(self.strategy)
        print("Magic:", end=" ")
        for spell_list in self.magic:  # TODO i think it can be contained in a single line
            print("[", end="")
            if(len(spell_list) > 0):
                for spell in spell_list[:-1]:
                    print(spell.short_print(), end=" | ")
                print(spell_list[-1].short_print(), end="")
            print("]", end=" ")
        print()
 */
}

// HERO

Hero::Hero()
: Unit::Unit()
{
/*
self.__exp = 0
self.gold = 10
knight = [3, 2, 1]
rouge = [2, 3, 1]
mage = [1, 2, 3]
roles = [knight, rouge, mage]
role = roles[random.randint(0, len(roles) - 1)]
self.STR = role[0]
self.AG = role[1]
self.INT = role[2]

self.artefact = items.Item(1)

self.artefact.set_stats(self.STR, self.AG, self.INT)

self.item_change()

self.max_HP = self.level * balance.strong
self.HP = self.max_HP
 */
}

bool Hero::pay(int price) {
    /*
     * # used in shop,if player has enough money to pay the price it returns true
        if price <= self.gold:
            self.gold -= price
            return True
        else:
            print("not enough money " + (price - self.gold) + " needed")
            return False
     */


    return false;// auto generated
}

void Hero::experience(int value)
{
/*
self.__exp += value * balance.weak
while self.__exp > (self.level * balance.levelup_speed):
    if (self.STR+self.AG+self.INT) == (len(balance.dices) * 3):
        self.stat_changed()
        return None  # max level

    self.__exp -= (self.level * balance.levelup_speed)
    self.level += 1

    levelups = []
    if self.STR < len(balance.dices):
        levelups.append(0)
    if self.AG < len(balance.dices):
        levelups.append(1)
    if self.INT < len(balance.dices):
        levelups.append(2)

    rand = levelups[random.randint(0, len(levelups) - 1)]
    if rand == 0:
        self.STR += 1
    elif rand == 1:
        self.AG += 1
    else:
        self.INT += 1

self.stat_changed()
 */
}

void Hero::stat_changed()
{
    /*
    # adjusting HP
    new_max_hp = self.level * balance.strong
    hp_correct = new_max_hp - self.max_HP
    self.max_HP = new_max_hp
    self.HP += hp_correct
     */
}

void Hero::heal()
{
/*
 * self.HP += value
        if self.HP > self.max_HP:
            self.HP = self.max_HP
 */
}

void Hero::cheats()
{
    STR = 6;
    AG = 6;
    INT = 6;
    max_HP = 420;
    HP = max_HP;
    gold += 1000;
}

// MONSTER
Monster::Monster()
: Unit::Unit()
{
/*
knight = [3, 2, 1]
rouge = [2, 3, 1]
mage = [1, 2, 3]
roles = [knight, rouge, mage]
role = roles[random.randint(0, len(roles)-1)]
self.STR = role[0]
self.AG = role[1]
self.INT = role[2]

if power < 1:
    power = 1
    print("minus level for mercenary        ERROR")
self.level = power

self.artefact = items.Item(power)
self.item_change()

# TODO this hp is really has low value maybe that's why game is so easy
self.max_HP = (power * 2)
self.HP = self.max_HP
 */
}



Hero create_mercenary (int power)
{
    auto mercenary = Hero();
    /*
    knight = [3, 2, 1]
    rouge = [2, 3, 1]
    mage = [1, 2, 3]
    roles = [knight, rouge, mage]
    role = roles[random.randint(1, len(roles))-1]

    if power < 1:
        power = 1
        print("minus level for mercenary        ERROR")

    mercenary.level = power

    mercenary.STR = role[0]
    mercenary.AG = role[1]
    mercenary.INT = role[2]

    mercenary.artefact = items.Item(power)
    mercenary.item_change()

    mercenary.max_HP = power
    mercenary.HP = mercenary.max_HP
     */
    return mercenary;
}


// TODO CHANGE THIS ATTACK IT'S BAD
int attack(int dices[])
{
    int value = 0;

    for (int i = 0; i < sizeof (dices); i++)
    {
        value += dice(dices[i]);
    }
    return value;
}



