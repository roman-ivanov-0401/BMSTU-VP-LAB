#pragma once
#include "../../view.h"
#include "../menuModel/menu.model.h"
#include "../menuController/menu.controller.h"


class MenuView: public IView<MenuModel, MenuController>{
    public:
        MenuView(MenuModel* menuModel, MenuController* menuController)
        : IView(menuModel, menuController)
        {};
        void update() override;
        void render() override;
    private:
        void renderTitle();
        void initMenuPoints(vector<MenuPointModule*>& menuPoints);
        void renderMenuPoints(vector<MenuPointModule*>& menuPoints);
        void renderInputOfOption();
};