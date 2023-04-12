#pragma once
#include <string>
#include "../../controller.h"

#include "../menu.types.h"
#include "../menuModel/menu.model.h"

using namespace std;

class MenuController: public IController<MenuModel>{
    public:
        MenuController(MenuModel* menuModel)
        : IController<MenuModel>(menuModel){};

        void setChosenPoint(int point){
            this->model->setChosenPoint(point);
        }

        int getChosenPoint(){
            return this->model->getChosenPoint();
        }

        string getTitle(){
            return this->model->getTitle();
        }

        MenuPoints* getMenuPoints(){
            return this->model->getMenuPoints();
        }

        void disableMenu(){
            this->model->setIsMenuActive(false);
        }

        bool getIsMenuActive(){
            return this->model->getIsMenuActive();
        }
};