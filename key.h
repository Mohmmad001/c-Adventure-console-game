#ifndef KEY_H
#define KEY_H

#include <iostream>
#include "item.h"


class KeyItem:public items{

    public:
     KeyItem(){
        name = "key";
        descreption = "You picked up a mysterious key! Wonder what it can open...";
     }
};

#endif