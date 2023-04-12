#pragma once
#include <vector>
#include <string>

#include "../../model.h"
#include "../menu.types.h"

using namespace std;

class MenuModel: public IModel{
    public:
        MenuModel(){};
        int getChosenPoint(){
            return this->chosenPoint;
        }

        MenuPoints* getMenuPoints(){
            return this->menuPoints;
        }

        string getTitle(){
            return this->title;
        }

        bool getIsMenuActive(){
            return this->isMenuActive;
        }

        void setChosenPoint(int chosenPoint){
            this->chosenPoint = chosenPoint;
        }

        void setMenuPoints(MenuPoints* newMenuPoints){
            this->menuPoints = newMenuPoints;
        }

        void setTitle(string title){
            this->title = title;
        }

        void setIsMenuActive(bool flag){
            this->isMenuActive = flag;
        }
    private:
        int chosenPoint;
        MenuPoints* menuPoints;
        string title;
        bool isMenuActive = true;
};