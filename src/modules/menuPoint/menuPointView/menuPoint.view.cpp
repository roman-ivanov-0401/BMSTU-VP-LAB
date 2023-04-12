#include "menuPoint.view.h"

void MenuPointView::render(){
    cout << "[" << this->model->getOrder() << "] " << this->model->getTitle() << endl;
}

void MenuPointView::update(){
    
}