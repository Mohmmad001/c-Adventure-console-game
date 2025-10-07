#ifndef TREASURE_ROOM_H
#define TREASURE_ROOM_H
#include <iostream>
#include "room.h"
#include "player_attribute.h"
#include "item.h"


class treasure_room:public room{

    public:
    treasure_room(){
        name = "treasure room";
        descreption = "The ultimate goal. Contains gold coins or other treasures. "
              "Can only be accessed after certain conditions are met (like collecting items).";
    }
    
    void display_room();
    void action_final();

  void display_action();

  void action1(int& coins,items* items_array,int size,player_attribute* attribute);
  void action2(int& coins,items* items_array,int size,player_attribute* attribute);
  void action3(int& coins,items* items_array,int size,player_attribute* attribute);
        
};


#endif