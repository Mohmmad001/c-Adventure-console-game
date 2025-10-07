#ifndef FOREST_H
#define FOREST_H
#include <iostream>
#include "room.h"
#include "player_attribute.h"
#include "item.h"


class forest:public room{

    public:
    forest(){
        name = "forest";
        descreption = "Dense woodland with winding paths. Contains wildlife and natural resources."
        " Exits to Home, Cave, and Lake.";
    }

    void display_room();
    void display_action();
        
  void action1(int& coins,items* items_array,int size,player_attribute* attribute);
  void action2(int& coins,items* items_array,int size,player_attribute* attribute);
  void action3(int& coins,items* items_array,int size,player_attribute* attribute);


};


#endif