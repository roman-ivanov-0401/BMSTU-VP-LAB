#pragma once
#include <string>

#include "../../module.h"
#include "../menuPointModel/menuPoint.model.h"
#include "../menuPointController/menuPoint.controller.h"
#include "../menuPointView/menuPoint.view.h"
#include "../menuPoint.types.h"

using namespace std;

class MenuPointModule: IModule<MenuPointModel, MenuPointView, MenuPointController>{
    public:
        MenuPointModule(MenuPointProps props)
        : IModule<MenuPointModel, MenuPointView, MenuPointController>(){
            this->model->setTitle(props.title);
            this->model->setCallback(props.callback);
            this->model->setOrder(props.order);
        }

        void run() override;
        void pick();
};