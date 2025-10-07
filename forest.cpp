#include "forest.h"
#include "sowrd.h"
#include "key.h"
#include "player_attribute.h"
#include <iostream>

using namespace std;

void forest::display_room() {
    cout << "+-------------------------------------------------------------------------------+" << endl;
    cout << "|                                   FOREST                                       |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|       A gentle breeze passes through the tall trees. The sunlight dances       |" << endl;
    cout << "|       through the leaves, and faint sounds of wildlife echo in the distance.   |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|     (Rock)        Sword on the ground                Wolf resting nearby       |" << endl;
    cout << "|      ___         /|                                (looks at you kindly)       |" << endl;
    cout << "|     (___)       /_|_                                                           |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|                             (@)    You are here                                |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "+--------------------------------------------------------------------------------+" << endl;   
}

void forest::display_action() {
    cout << "Actions:" << endl;
    cout << " 1. Try to lift the rock" << endl;
    cout << " 2. Pick up the Sword" << endl;
    cout << " 3. Pet the wolf " << endl;
    cout << " 4. Leave the forest" << endl;
}

// ────────────────────────────────────────────────────────────────

void forest::action1(int& coins, items* items_array, int size, player_attribute* attribute) {

    static bool coin_found = false; // prevents multiple coins from one rock

    if (coin_found) {
        cout << "You already lifted the rock before there's nothing else under it." << endl;
        return;
    }

    if (attribute->get_strength() >= 4) {
        coins += 1;
        coin_found = true;

        cout << "You strain your muscles and finally lift the heavy rock..." << endl;
        cout << "Underneath it lies a shiny coin gleaming in the dirt!" << endl;
        cout << "Total coins: " << coins << endl;

    } else {
        cout << "You try to lift the rock, but it barely moves. You'll need more strength." << endl;
    }
}

// ────────────────────────────────────────────────────────────────

void forest::action2(int& coins, items* items_array, int size, player_attribute* attribute) {

    for (int i = 0; i < size; i++) {
        if (items_array[i].name == "Soward") {
            cout << "You already picked up the soward earlier." << endl;
            return;
        }
    }

    for (int i = 0; i < size; i++) {
        if (items_array[i].name.empty()) {
            soward sowrd1;
            items_array[i] = sowrd1; 
            cout << "You kneel and grasp the soward's hilt. It's slightly rusted but strong." << endl;
            cout << sowrd1.descreption;
            break;
        }
    }
}

// ───────────────────────────────────────────────────────────────

void forest::action3(int& coins, items* items_array, int size, player_attribute* attribute) {

    for (int i = 0; i < size; i++) {
        if (items_array[i].name == "key") {
            cout << "You pet the wolf again—it wags its tail happily!" << endl;
            return;
        }
    }

    for (int i = 0; i < size; i++) {
        if (items_array[i].name.empty()) {
            KeyItem key1;
            items_array[i] = key1; 

            cout << "You slowly approach the wolf and pet its soft fur." << endl;
            cout << "It seems to trust you now... The wolf drops a small rusty key at your feet!" << endl;
            cout << "You picked up a key!" << endl;
            break;
        }
    }
}
