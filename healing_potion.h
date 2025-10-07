#ifndef HEALING_H
#define HEALING_H

#include <iostream>
#include "item.h"

class healing:public items{

     healing(){
        name = "healing potion";
        descreption = "You picked up a Healing Potion!"
          "A red, glowing liquid that restores your strength when you drink it.";
     }
};

#endif