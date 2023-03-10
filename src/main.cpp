#include <iostream>
#include <vector>

#include "./Menu/CMenu.h"
#include "menuFuncs.h"
#include "consts.h"

using namespace std;
using namespace CM;

int main(){

    CMenuItem* cMenuItems = new CMenuItem[START_QUANTITY_OF_POINTS]{
        CMenuItem("Calculate the square root", calculateSquareRootCb),
        CMenuItem("Greet user", greetUserCb),
        CMenuItem("Display pseudographics", displayPseudographicsCb),
    };
    CMenu cMenu("Menu", cMenuItems, START_QUANTITY_OF_POINTS);
    cMenu.start();
    return 0;
}