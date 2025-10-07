#include <iostream>
#include "secret_room.h"
#include "player_attribute.h"

using namespace std;

void secret_room::display_room(){

    cout << "+--------------------------------------------------------------------------------+" << endl;
    cout << "|                               SECRET ROOM                                      |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|     Shelves of old books  covered in dust.                                     |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|     (Ancient Rune)      Candles flicker around a table.                      |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|                        (@)   You are here                                     |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "|     A small chest glimmers faintly under a pile of scrolls.                    |" << endl;
    cout << "|                                                                                |" << endl;
    cout << "+--------------------------------------------------------------------------------+" << endl;   
}

void secret_room::display_action(){
    cout << "Actions:" << endl;
    cout << " 1. Look around in books" << endl;
    cout << " 2. Study the Rune" << endl;
    cout << " 3. Search carefully" << endl;
    cout << " 4. Leave the secret room" << endl;
}


void secret_room::action1(int& coins, items* items_array, int size, player_attribute* attribute) {
    std::cout << "You browse through the dusty old books. Most are just ancient stories, but one contains a faintly glowing symbol." << std::endl;
}

void secret_room::action2(int& coins, items* items_array, int size, player_attribute* attribute) {
    std::cout << "You study the Rune carefully. Its patterns are mesmerizing, but you feel wiser for the effort." << std::endl;
}

void secret_room::action3(int& coins, items* items_array, int size, player_attribute* attribute) {
    static bool coin_taken = false;  // static so it remembers across calls

    if (coin_taken) {
        std::cout << "You already took the coin here!" << std::endl;
        return;
    }

    coins += 1;
    coin_taken = true;
    std::cout << "You search carefully and find a shiny coin!" << std::endl;
    std::cout << "Total coins: " << coins << std::endl;
}