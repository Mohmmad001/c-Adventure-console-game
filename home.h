#ifndef HOME_H
#define HOME_H

#include <iostream>
#include "room.h"
#include "player_attribute.h"
#include "item.h"


class home:public room{

  public:
       home() {
        name = "home";
        descreption = "Your cozy starting point. Contains basic items like a key, "
                      "a table, and a chair. Safe and familiar, with exits to Forest and Lake.";
    }

      void display_room();
      void display_action();
    
      void action1(int& coins,items* items_array,int size,player_attribute* attribute);
      void action2(int& coins,items* items_array,int size,player_attribute* attribute);
      void action3(int& coins,items* items_array,int size,player_attribute* attribute);
};

#endif