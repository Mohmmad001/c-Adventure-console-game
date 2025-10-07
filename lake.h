#ifndef LAKE_H
#define LAKE_H
#include <iostream>
#include "room.h"
#include "player_attribute.h"
#include "item.h"

class lake:public room{

    public:
    lake(){
       name = "lake";
        descreption = "Calm waters surrounded by trees. You might find fishing gear or herbs here." 
        "Exits to Home, Forest, and Hill.";
    }
       
    void display_room();
    void display_action();

  void action1(int& coins,items* items_array,int size,player_attribute* attribute);
  void action2(int& coins,items* items_array,int size,player_attribute* attribute);
  void action3(int& coins,items* items_array,int size,player_attribute* attribute);
};


#endif