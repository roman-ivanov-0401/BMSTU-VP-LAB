#pragma once
#include <iostream>

#include "../../view.h"
#include "../menuPointModel/menuPoint.model.h"
#include "../menuPointController/menuPoint.controller.h"

using namespace std;

class MenuPointView: public IView<MenuPointModel, MenuPointController>{
    public:
        MenuPointView(MenuPointModel* menuModel, MenuPointController* menuPointController)
        : IView(menuModel, menuPointController){};
        void render();
        void update();
};