/*

 */

#include "terrain.h"

#include "jobs.h"
#include "balance.h"
#include "economy.h" // from economy import roman_numbers

/*

def name_generator():

    prefix = ["", "Green", "Dark", "Toxic", "Inferno", "Orc", "Goblin", "Dragon"]
    core = ["Forest", "Cave", "Dungeon", "Town", "Village", "Mountains", "Graveyard"]
    # suffix = ["", ""]
    new_unique = False
    new_name = ""

    checking_wrong_balance = 0
    while not new_unique:
        checking_wrong_balance += 1
        if checking_wrong_balance > balance.world.amount_location * 5:
            print("Error: cannot create random new location name")
            exit(343)
        new_name = prefix[random.randint(0, len(prefix)-1)] + " " + core[random.randint(0, len(core)-1)]

        if new_name in balance.world.location_names:
            new_unique = False
        else:
            new_unique = True

    balance.world.location_names.append(new_name)
    return new_name


class Location:
    def __init__(self, location_level, amount, id_x):
        self.id = id_x

        self.name = name_generator()

        self.level = location_level
        self.quest_level = location_level + 2
        if self.quest_level > balance.max_power:
            self.quest_level = balance.max_power

        self.chest_gold = location_level * balance.medium

        self.density = 5  # number of events in location
        self.chest_chance = 3  # %(10) chest chance
        self.quest_enemy = 5  # %(10) chance of quest related enemy

        self.location_names = []

        self.amount_location = amount

    def short_print(self):
        return self.name + " " + roman_numbers(self.level)
 */
void Earth::new_quest()
{
    //main_quest = jobs.Quest()
}

void Earth::generate_location()
{
    for (int place = 0, id = 0; place < amount_location; place++, id++)
    {
        //locations.append(Location(place + 1, amount_location, id))  // level, overall location number
    }
}
