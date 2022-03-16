/*
Project Console dungeon
 */


#include <iostream>

#include "units.h"
#include "economy.h"
#include "balance.h"
#include "explore.h"
#include "terrain.h"
#include "manager.h"



using namespace std;




void gameplay_loop (Troop heroes)
{
    /*
    balance.world = terrain.Earth()
    balance.world.generate_location()
    balance.world.new_quest()

    heroes.append(units.create_mercenary(balance.world.current_day))

    # print(heroes)

    item_list = economy.generate_items(1)

    choice = 0
    while choice != 9:

        if balance.world.main_quest.days_to_complete <= 0:
            # Time has run out DEFEAT
            print(balance.world.main_quest.fail_story)
            exit()

        # if choice == 0: # starting value, also assigned in case of wrong input

        if choice < 3:  # if choice was not to explore the days are not passing
            pass
        else:
            balance.world.main_quest.days_to_complete -= 1
            balance.world.main_quest.check_quest(heroes[0])
            balance.world.current_day += 1
            heroes.append(units.create_mercenary(balance.world.current_day))
            item_list = economy.generate_items(balance.world.current_day)

        balance.world.main_quest.print_info()
        print("Day %d  1 info   2 shop  3 world  9 Exit game" % balance.world.current_day)

        choice = manager.choice()

        # list of locations
        if choice == 1:
            heroes[0].printing_all_stats()  # info
        elif choice == 2:
            economy.shop(heroes[0], item_list)  # shop
        elif choice == 3:
            if not explore.walking(heroes, balance.world):
                choice = 0  # player didn't explore anything
                # TODO this system is bad, day system should be remade
        elif choice == 8:
            heroes[0].cheats()
 */
}



int main() {
    cout << "Start" << endl;



    // player creation

    auto heroes = Troop(2); // TODO normal constructor

    gameplay_loop(heroes); // heroes

    return 0;
}

