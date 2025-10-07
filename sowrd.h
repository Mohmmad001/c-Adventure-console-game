#ifndef SOWARD_H
#define SOWARD_H

#include <iostream>
#include "item.h"

class soward:public items{

 public:
     soward(){
        name = "Soward";
        descreption = "You picked up a Sword!"
          "A sharp and balanced blade, perfect for defending yourself against goblins or wild creatures.";
     }
};

#endif