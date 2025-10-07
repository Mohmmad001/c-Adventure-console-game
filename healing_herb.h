#ifndef HERB_H
#define HERB_H

#include <iostream>
#include "item.h"

class herb:public items{

     herb(){
        name = "herb";
        descreption = "You picked up a Healing Herb!"
          "A fragrant plant with natural healing power. You can brew or use it to recover health.";
     }
};

#endif