#include "./menuPoint.h"

MenuPoint::MenuPoint(string title, Callback callback)
: title(title), callback(callback){}

string MenuPoint::getTitle(){
    return this->title;
}

void MenuPoint::setTitle(string title){
    this->title = title;
}