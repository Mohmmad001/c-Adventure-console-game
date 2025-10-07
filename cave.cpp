#include "cave.h"
#include "player_attribute.h"
#include <iostream>
#include <algorithm>

using namespace std;

void cave::display_room(){
    cout << "+--------------------------------------------------------------------------------+" << endl;
    cout << "|                                   CAVE                                         |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|       Use your torch to light the darkness...                                   |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|       Rough walls, dripping water, and echoes of distant steps.                |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|       (Cracks in wall)       Goblin lurking                                    |" << endl;
    cout << "|            ||               O===[::::::::::::>                                 |" << endl;
    cout << "|            ||                                                                  |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|                             (@)    You are here                                |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "+--------------------------------------------------------------------------------+" << endl;
}

void cave::display_action(){
    cout << "Actions:" << endl;
    cout << " 1. Explore the cave walls" << endl;
    cout << " 2. Search cracks" << endl;
    cout << " 3. Fight Goblin" << endl;
    cout << " 4. Leave the cave" << endl;
}

void cave::action1(int& coins, items* items_array, int size, player_attribute* attribute){
    cout << "You explore the cave walls carefully. Nothing seems interesting, except for some cracks that strangely shine." << endl;
}

void cave::action2(int& coins, items* items_array, int size, player_attribute* attribute){
    static bool coinTaken = false; // only allow coin once
    if (!coinTaken) {
        coins += 1;
        cout << "You carefully search the cracks in the cave walls and discover a shiny coin!" << endl;
        cout << "Total coins: " << coins << endl;
        coinTaken = true;
    } else {
        cout << "You already took the coin from these cracks." << endl;
    }
}

void cave::action3(int& coins, items* items_array, int size, player_attribute* attribute){
    bool hasSword = false;
    for (int i = 0; i < size; i++) {
        if (items_array[i].name == "Soward") {
            hasSword = true;
            cout << "\nYou grip your sword tightly, ready for battle.\n";
            break;
        }
    }

    if (!hasSword) {
        cout << "\nYou see a Goblin lurking in the cave... but you have no weapon!" << endl;
        cout << "The Goblin lunges at you, and you barely escape alive.\n";
        cout << "Hint: Find a sword before coming back here!\n";
        return;
    }

    int goblin_health = 10;    
    int goblin_defend = 1;
    int goblin_attack = 4;

    // health = 10
    // powerattack = 4
    // defend = 2

    cout << "\n=====================================\n";
    cout << "A sneaky Goblin jumps out from behind the rocks!\n";
    cout << "It snarls and prepares to attack!\n";
    cout << "=====================================\n\n";

    int round = 1;
    while (true) {
        cout << "\nROUND " << round << "\n";
        cout << "Your HP: " << attribute->get_health() 
             << " | Goblin HP: " << goblin_health << "\n\n";

        cout << "Choose your action:\n";
        cout << "1. Attack\n";
        cout << "2. Defend\n";
        cout << "Choice: ";
        char input;
        cin >> input;

        // Player's turn
        if (input == '1') {
            int damage = max(1, attribute->get_powerAttack() - goblin_defend);
            goblin_health -= damage;
            cout << "You slash the Goblin, dealing " << damage << " damage!\n";
        } 
        else if (input == '2') {
            cout << "You brace yourself for the next attack.\n";
        } 
        else {
            cout << "You fumble and lose your turn!\n";
        }

        // Check if Goblin is dead
        if (goblin_health <= 0) {
            cout << "\nYou defeated the Goblin after a fierce fight!\n";
            cout << "Your strength increases by 2.\n";
            attribute->set_strength(attribute->get_strength() + 2);
            break;
        }

        // Goblin's turn
        std::cout<<"it is Goblin turn for attack"<<std::endl;

        cout << "Choose your action:\n";
        cout << "1. Attack\n";
        cout << "2. Defend\n";
        cout << "Choice: ";

        std::cin>>input;  

        if(input == '1'){
            int damage = max(1, attribute->get_powerAttack() - 2 - goblin_defend);
            goblin_health -= damage;
            cout << "You slash the Goblin, dealing " << damage << " damage!\n";
            cout<<"but the goblingwas faster than you and attacked stronger you!"<<std::endl;
            attribute->set_health(attribute->get_health()-goblin_attack);
        }else if(input == '2'){
          std::cout<<"You defend well cause just one damage"<<std::endl;
           attribute->set_health(attribute->get_health()-1);
        }

        /*int goblin_damage = goblin_attack;
        if (input == '2') {
            goblin_damage = max(0, goblin_attack - attribute->get_defend());
            cout << "Your defense reduces the incoming damage!\n";
        }

        attribute->set_health(attribute->get_health() - goblin_damage);
        cout << "The Goblin hits you for " << goblin_damage << " damage!\n";
        cout << "Your health is now: " << attribute->get_health() << "\n";*/

        // Check if player is dead
        if (attribute->get_health() <= 0) {
            cout << "\nYou have been defeated by the Goblin...\n";
            cout << "Game Over!\n";
            exit(0);
        }

        round++;
    }
}
