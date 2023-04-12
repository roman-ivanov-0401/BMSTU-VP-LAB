#pragma once
#include "../../controller.h"
#include "../menuPointModel/menuPoint.model.h"

class MenuPointController: public IController<MenuPointModel>{
    public:
        MenuPointController(MenuPointModel* menuPointModel)
        : IController(menuPointModel){};
};