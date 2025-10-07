#ifndef SECRET_ROOM_H
#define SECRET_ROOM_H

#include <iostream>
#include "room.h"
#include "player_attribute.h"
#include "item.h"


class secret_room:public room{

 public:
 secret_room(){
name = "secret room";
descreption = "Hidden chamber that can only be accessed after finding the key." 
"Could contain a special item or clue for the story.";
 }

 void display_room();
 void display_action();

  void action1(int& coins,items* items_array,int size,player_attribute* attribute);
  void action2(int& coins,items* items_array,int size,player_attribute* attribute);
  void action3(int& coins,items* items_array,int size,player_attribute* attribute);

        
};


#endif