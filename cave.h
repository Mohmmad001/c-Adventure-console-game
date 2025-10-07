#ifndef CAVE_H
#define CAVE_H
#include <iostream>
#include "room.h"
#include "player_attribute.h"
#include "item.h"


class cave:public room{

    public:
         cave() {
        name = "cave";
        descreption = "Dark, damp, and mysterious. Might contain monsters, rocks, or hidden treasures. "
                      "Exits to Forest and Hill.";}

void display_room();
void display_action();

void action1(int& coins,items* items_array,int size,player_attribute* attribute);
void action2(int& coins,items* items_array,int size,player_attribute* attribute);
void action3(int& coins,items* items_array,int size,player_attribute* attribute);
};



#endif