#include "menuPoint.module.h"

void MenuPointModule::run(){
    this->view->render();
}

void MenuPointModule::pick(){
    this->model->getCallback()();
}