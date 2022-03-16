#ifndef CPP_DUNGEON_UNITS_H
#define CPP_DUNGEON_UNITS_H

#include "items.h"

class units {

};


class Troop
{
private:
    int a;
public:
    Troop(int x);
    int get();
};



class Unit
{
public:
    int STR;  // STRENGTH number of sides in bonus dices
    int AG;   // AGILITY number of additional dices
    int INT;  // INTELLIGENCE number of additional effects

    int HP; // health points
    int max_HP;

    int level;

    Item artefact;  // only one object item can be assigned to a unit

    // full list of dices used to generate strategy
    //int dice_pool [];
    //int turn_pool [];
    // effects_pool = []

    int attack_speed; // default 1

     //lists of dices used for fighting
    /*
       strategy = [[]]
       magic = [[]]
    */

    Unit();
    void item_change();
    void generate_strategy();
    void effect(); // (dices, action)
    void printing_all_stats();
};

class Hero: public Unit
{
private:
    int exp;
public:
    int gold;

    Hero();
    bool pay (int price);
    void experience (int value);
    void stat_changed ();
    void heal ();
    void cheats ();
    /*
      def printing_all_stats(self):
        super().printing_all_stats()
        # we add hero specific values
        print("Gold: %d Level: %d Exp: %d" % (self.gold, self.level, self.__exp))
     */
};

class Monster: public Unit
{
public:
    Monster();
};

#endif //CPP_DUNGEON_UNITS_H
