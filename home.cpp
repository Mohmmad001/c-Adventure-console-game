#include "home.h"
#include "tourch.h"
#include "healing_potion.h"
#include "player_attribute.h"
#include <iostream>

using namespace std;

bool drawer_checked = false;  // prevent player from collecting the same coin twice

void home::display_room() {
    cout << "+--------------------------------------------------------------------------------+" << endl;
    cout << "|                                 HOME ROOM                                      |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|   [Torch]        ( ) Fireplace                            [Potion Bottle]      |" << endl;
    cout << "|     |             /\\                                       ______             |" << endl;
    cout << "|     |            /__\\                                     |__  __|            |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|                            (@)  You are here                                   |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|  Wooden drawers near the wall maybe there are some coins inside...             |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "+--------------------------------------------------------------------------------+" << endl;
}

void home::display_action() {
    cout << "Actions:" << endl;
    cout << " 1. Pick up the Torch" << endl;
    cout << " 2. Drink the Healing Potion" << endl;
    cout << " 3. Search the drawers" << endl;
    cout << " 4. Leave the room (Exit)" << endl;
}

void home::action1(int& coins, items* items_array, int size, player_attribute* attribute) {

    for (int i = 0; i < size; i++) {
        if (items_array[i].name == "tourch") {
            cout << "You alraey had the tourch!" << endl;
            return;
        }
    }

    for (int i = 0; i < size; i++) {
        if (items_array[i].name.empty()) {
            tourch tourch1;
            items_array[i] = tourch1;
            cout << tourch1.descreption;
            break;
        }
    }
}

void home::action2(int& coins, items* items_array, int size, player_attribute* attribute) {

    if (attribute->get_health() == 10) {
        cout << "You can't drink, your health is full!" << endl;
    } 
    else {
        if (attribute->get_health() == 9) {
            attribute->set_health(attribute->get_health() + 1);
        } 
        else {
            attribute->set_health(attribute->get_health() + 2);
        }
        cout << "You drank the potion. Health restored, Current health "  
             << attribute->get_health() << endl;
    }
}

void home::action3(int& coins, items* items_array, int size, player_attribute* attribute) {

    if (drawer_checked) {
        cout << "You already searched the drawers, nothing left here!" << endl;
        return;
    }

    coins += 1;
    drawer_checked = true;

    cout << "You searched the drawers and found a shiny coin!" << endl;
    cout << "Total coins: " << coins << endl;
}
