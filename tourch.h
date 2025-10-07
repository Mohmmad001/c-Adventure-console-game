#ifndef TOURCH_H
#define TOURCH_H

#include <iostream>
#include "item.h"

class tourch:public items{

   public:
     tourch(){
        name = "tourch";
        descreption = "You picked up a Torch!"
        "Its warm flame lights up the darkness ahead useful for exploring caves or secret rooms. ";
     }
};

#endif
