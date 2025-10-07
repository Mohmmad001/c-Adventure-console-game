#include "lake.h"
#include "player_attribute.h"
#include <iostream>

using namespace std;

void lake::display_room() {
    cout << "+-----------------------------------------------------------------------------+" << endl;
    cout << "|                                   LAKE                                      |" << endl;
    cout << "|                                                                             |" << endl;
    cout << "|        ~~~~~     ~~~~          A calm blue lake reflects the sky.           |" << endl;
    cout << "|       ~   ~~~~ ~~~~ ~~~                                                     |" << endl;
    cout << "|               Fish jump near the shore.      (Healing Herb)                 |" << endl;
    cout << "|                                                                             |" << endl;
    cout << "|                       (@)    You are here                                   |" << endl;
    cout << "|                                                                             |" << endl;
    cout << "|     A bottle floats nearby... maybe it holds a letter?                      |" << endl;
    cout << "|                                                                             |" << endl;
    cout << "+-----------------------------------------------------------------------------+" << endl;  
}

void lake::display_action() {
    cout << "Actions:" << endl;
    cout << " 1. Fish (try to catch a fish )" << endl;
    cout << " 2. Collect Healing Herb by the shore" << endl;
    cout << " 3. Explore around the lake : find a letter or something" << endl;
    cout << " 4. Leave the lake" << endl;
}

// ────────────────────────────────────────────────

void lake::action1(int& coins, items* items_array, int size, player_attribute* attribute) {
    static bool fish_caught = false;

    if (fish_caught) {
        cout << "You already fished here. The lake is calm now, no more fish biting." << endl;
        return;
    }

    fish_caught = true;
    coins += 1;

    cout << "You throw your line and wait patiently..." << endl;
    cout << "After a few moments, you feel a tug! You caught a fish!" << endl;
    cout << "While cleaning it, you find a shiny coin inside its belly!" << endl;
    cout << "Total coins: " << coins << endl;
}

// ────────────────────────────────────────────────

void lake::action2(int& coins, items* items_array, int size, player_attribute* attribute) {
    static bool herb_collected = false;

    if (herb_collected) {
        cout << "You already took the healing herb from the shore. There's nothing left." << endl;
        return;
    }

    if (attribute->get_health() == 10) {
        cout << "You can't collect the herb, your health is full!" << endl;
        return;
    }

    herb_collected = true;

    if (attribute->get_health() == 9) {
        attribute->set_health(attribute->get_health() + 1);
    } else {
        attribute->set_health(attribute->get_health() + 2);
    }

    cout << "You collect a fresh green herb and chew it carefully." << endl;
    cout << "You feel energy rushing back into your body!" << endl;
    cout << "Current Health: " << attribute->get_health() << endl;
}

// ────────────────────────────────────────────────

void lake::action3(int& coins, items* items_array, int size, player_attribute* attribute) {
    static bool letter_found = false;

    if (letter_found) {
        cout << "You already found the letter earlier. The lake waves gently as if hiding secrets." << endl;
        return;
    }

    letter_found = true;

    cout << "You walk slowly around the lake's edge..." << endl;
    cout << "A glimmer catches your eye  a bottle floating near the shore!" << endl;
    cout << "You pick it up, open it, and pull out a rolled-up letter inside." << endl;
    cout << "You read the letter. It says:" << endl;
    cout << "\"The journey of a thousand miles begins with a single step.\"" << endl;
    cout << "You keep the message close it feels important somehow." << endl;
}
