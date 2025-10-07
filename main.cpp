#include <iostream>
#include "player.h"
#include "player_attribute.h"
#include "room.h"
#include "home.h"
#include "secret_room.h"
#include "treasure_room.h"
#include "forest.h"
#include "lake.h"
#include "cave.h"
#include "item.h"

using namespace std;

int COINS = 0;
int const INVENTORY_SIZE = 4;
items INVENTORY[INVENTORY_SIZE];

int health{10};
int powerAttack{5};
int strength{5};

int main() {

    // create rooms
    treasure_room treasure1;
    home home1;
    secret_room secret1;
    forest forest1;
    lake lake1;
    cave cave1;

    // connect them
    treasure1.east = &home1;
    home1.west     = &treasure1;
    home1.north    = &secret1;
    home1.east     = &forest1;

    secret1.south  = &home1;

    forest1.west   = &home1;
    forest1.north  = &lake1;
    forest1.south  = &cave1;

    lake1.south    = &forest1;
    cave1.north    = &forest1;

    room* current_room = &home1;

    cout << "-------------------------------------\n";
    cout << "Welcome to c++ Adventure console game\n";
    cout << "-------------------------------------\n\n\n\n";

    cout << "please enter your player attributes\n";

    string name;
    cout << "name: ";
    cin >> name;

    cout << "\n\n\n\n";

    player_attribute* attribute = new player_attribute();
    player MainPlayer(name, 'M', 20, attribute);

    // Story introduction
    cout << "\n-------------------------------------\n";
    cout << "Welcome, " << name << "!\n";
    cout << "You find yourself in the mysterious land of C++ Adventure.\n";
    cout << "Your goal is to explore different rooms, collect 5 gold coins,\n";
    cout << "and return safely to win the game.\n";
    cout << "Be careful! Some rooms may have traps or enemies.\n";
    cout << "Good luck!\n";
    cout << "-------------------------------------\n\n";

    char Input{'0'};

    while (true) {

        if (Input == '4' || Input == '0') {
            current_room->display_room();
            current_room->display_action();
        }

        cout << "\nChoice: ";
        cin >> Input;

        if (Input == '1') {
            current_room->action1(COINS, INVENTORY, INVENTORY_SIZE, attribute);
        } 
        else if (Input == '2') {
            current_room->action2(COINS, INVENTORY, INVENTORY_SIZE, attribute);
        } 
        else if (Input == '3') {
            current_room->action3(COINS, INVENTORY, INVENTORY_SIZE, attribute);
        } 
        else if (Input == '4') {

            while (1) {
              std::cout << "Exit direction (enter first letter N/S/E/W): ";
              Input = '4';

                char dir;
                cin >> dir;

                if (dir == 'N' || dir == 'n') {
                    if (current_room->north == nullptr) {
                        cout << "you can't go there" << endl;
                        continue;
                    }

                    int flag = 0;

                    if (current_room->name == "home") {
                        for (int i = 0; i < INVENTORY_SIZE; i++) {
                            if (INVENTORY[i].name == "key") { flag = 1; break; }
                        }

                        if (flag == 1) {
                            current_room = current_room->north;
                            break;
                        } else {
                            cout << "it seems it require a key!" << endl;
                            Input = '1';
                        }
                    } 
                    else {
                        current_room = current_room->north;
                        break;
                    }
                }

                else if (dir == 'S' || dir == 's') {
                    if (current_room->south == nullptr) {
                        cout << "you can't go there" << endl;
                        continue;
                    }

                    int flag = 0;

                    if (current_room->name == "forest") {
                        for (int i = 0; i < INVENTORY_SIZE; i++) {
                            if (INVENTORY[i].name == "tourch") { flag = 1; break; }
                        }

                        if (flag == 1) {
                            current_room = current_room->south;
                            break;
                        } else {
                            cout << "You need a toruch to see through this dark cave" << endl;
                            Input = '1';
                        }
                    } 
                    else {
                        current_room = current_room->south;
                        break;
                    }
                }

                else if (dir == 'E' || dir == 'e') {
                    if (current_room->east == nullptr) {
                        cout << "you can't go there" << endl;
                        continue;
                    }
                    current_room = current_room->east;
                    break;
                }

                else if (dir == 'W' || dir == 'w') {
                    if (current_room->west == nullptr) {
                        cout << "you can't go there" << endl;
                        continue;
                    }

                    if (current_room->name == "home") {
                        if (COINS <= 4) {
                            cout << "You need 5 coins to make it" << endl;
                            Input = '1';
                        } else {
                            current_room = current_room->west;
                            break;
                        }
                    } 
                    else {
                        current_room = current_room->west;
                        break;
                    }
                }

                else {
                    cout << "Invalid choice" << endl;
                    continue;
                }
            }
        }
    }

    delete attribute;
    return 0;
}
