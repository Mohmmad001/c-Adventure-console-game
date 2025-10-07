#include "treasure_room.h"
#include "player_attribute.h"
#include <iostream>

using namespace std;

void treasure_room::display_room(){

    cout << "+--------------------------------------------------------------------------------+" << endl;
    cout << "|                           FINAL TREASURE ROOM                                  |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|                         CONGRATULATIONS!                                       |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|        You've reached the treasure chamber!                                    |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|            =============================                                     |" << endl;
    cout << "|            |      TREASURE CHEST       |                                       |" << endl;
    cout << "|            =============================                                      |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|                          Crown of Victory                                      |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|                            (@)   You stand triumphant                         |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "+--------------------------------------------------------------------------------+\n\n\n" << endl;
     std::cout << "You open the treasure chest and see glittering gold inside!\n";
    std::cout << "You take the Crown of Victory! \n";
    std::cout << " CONGRATULATIONS!! You've completed the adventure! \n\n";
    std::cout << "Hope you enjoyed my C++ adventure game! \n";
    std::cout << "Thanks for playing! Keep coding and exploring new worlds.\n";
    exit(0);
}

void treasure_room::action_final() {
    std::cout << "You open the treasure chest and see glittering gold inside!\n";
    std::cout << "You take the Crown of Victory! \n";
    std::cout << " CONGRATULATIONS!! You've completed the adventure! \n\n";
    std::cout << "Hope you enjoyed my C++ adventure game! \n";
    std::cout << "Thanks for playing! Keep coding and exploring new worlds.\n";
    exit(0);
}

void treasure_room::display_action() {
    cout << "Actions:" << endl;
    cout << "1. Open the Treasure Chest" << endl;
    cout << "2. Take the Crown/Legendary Sword" << endl;
    cout << "3. Celebrate (prints CONGRATULATIONS)" << endl;
    cout << "4. Exit the dungeon (End Game)" << endl;
}

void treasure_room::action1(int& coins, items* items_array, int size, player_attribute* attribute) {
    cout << "You open the treasure chest and see gold and gems everywhere!" << endl;
}

void treasure_room::action2(int& coins, items* items_array, int size, player_attribute* attribute) {
    cout << "You take the legendary Crown of Victory!" << endl;
}

void treasure_room::action3(int& coins, items* items_array, int size, player_attribute* attribute) {
    cout << "CONGRATULATIONS!  Hope you enjoyed my C++ game!" << endl;
}