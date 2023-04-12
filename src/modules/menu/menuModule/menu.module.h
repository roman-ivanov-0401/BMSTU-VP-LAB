#pragma once

#include "../../module.h"
#include "../menuController/menu.controller.h"
#include "../menuView/menu.view.h"
#include "../menuModel/menu.model.h"

using namespace std;

class MenuModule: public IModule<MenuModel, MenuView, MenuController>{
    public:
        MenuModule(MenuProps menuProps)
        : IModule<MenuModel, MenuView, MenuController>(){
            this->model->setMenuPoints(menuProps.menuPoints);
            this->model->setTitle(menuProps.title);;
        };

        void run() override;
};  

