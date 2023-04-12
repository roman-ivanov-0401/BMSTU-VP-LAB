#include "observe.h"

void Observable::addObserver(Observer* observer){
    this->_observers.push_back(observer);
}

void Observable::notifyUpdate(){
    for(int i = 0; i < this->_observers.size(); i++){
        this->_observers[i]->update();
    }
}