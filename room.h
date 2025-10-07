#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include "item.h"
#include "player_attribute.h"

class room{

 public:
   std::string name;
   std::string descreption;
  
   room* north = nullptr;
   room* south = nullptr;
   room* west = nullptr;
   room* east = nullptr;

 virtual void display_room() = 0;
 virtual void display_action() = 0;

 virtual void action1(int& coins,items* items_array,int size,player_attribute* attribute) = 0;
 virtual void action2(int& coins,items* items_array,int size,player_attribute* attribute) = 0;
 virtual void action3(int& coins,items* items_array,int size,player_attribute* attribute) = 0;
};


#endif