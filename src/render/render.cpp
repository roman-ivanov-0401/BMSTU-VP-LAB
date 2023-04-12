#include <iostream>
#include <iomanip>

#include "./render.h"
#include "../menu/menuPoint/menuPoint.h"

using namespace std;

void Render::renderMenuPointInMenu(MenuPoint &menuPoint, int numberOfOption){
    cout << "[" << setw(3) << numberOfOption << "] " << menuPoint.getTitle() << endl;
}

void Render::renderMenu(Menu &menu){
    cout << "Laboratory work | " << menu.getTitle() << endl;
    for(int i = 0; i < menu.getQuantityOfPoints(); i++){
        renderMenuPointInMenu(*menu[i], i);
    }
}