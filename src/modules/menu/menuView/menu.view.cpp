#include <iostream>
#include <vector>
#include "menu.view.h"
#include "../../menuPoint/menuPointModule/menuPoint.module.h"
#include "../../../utils/input/input.utils.h"


using namespace std;

void MenuView::renderTitle(){
    cout << this->controller->getTitle() << " | Laboratory work" << endl;
}

void MenuView::initMenuPoints(vector<MenuPointModule*>& modules){
    for(int i = 0; i < this->controller->getMenuPoints()->size(); i++){
        modules.push_back(new MenuPointModule(
            this->controller->getMenuPoints()->at(i)
            ));
    }
}

void MenuView::renderMenuPoints(vector<MenuPointModule*>& menuPoints){
    for(int i = 0; i < this->controller->getMenuPoints()->size(); i++){
        menuPoints.at(i)->run();
    }
}

void MenuView::renderInputOfOption(){
    cout << "Enter number of option: " << endl;
    int choose = 0;
    InputUtils::inputIntInRange(choose, 1, this->model->getMenuPoints()->size());
    this->controller->setChosenPoint(choose);
}

void MenuView::render(){
    do{
    system("clear");
    this->renderTitle();
    vector<MenuPointModule*> modules;
    this->initMenuPoints(modules);
    this->renderMenuPoints(modules);
    this->renderInputOfOption();
    modules[this->controller->getChosenPoint() - 1]->pick();
    } while(
        this->controller->getChosenPoint() != this->controller->getMenuPoints()->size()
        &&
        this->controller->getIsMenuActive()
        );
    
}

void MenuView::update(){

}