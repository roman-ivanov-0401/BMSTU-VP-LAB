#pragma once
#include <string>
#include "../../model.h"
#include "../../../utils/inheritance.h"
#include "../menuPoint.types.h"


using namespace std;

class MenuPointModel: public IModel{
    public:
        string getTitle(){
            return this->title;
        }

        Callback getCallback(){
            return this->callback;
        }

        int getOrder(){
            return this->order;
        }

        bool *getIsMenuActive(){
            return this->isMenuActive;
        }

        void setTitle(string title){
            this->title = title;
        }

        void setCallback(Callback callback){
            this->callback = callback;
        }

        void setOrder(int order){
            this->order = order;
        }

        void setIsMenuActive(bool *value){
            this->isMenuActive = value;
        }


        void changeIsMenuActive(bool value){
            *this->isMenuActive = value;
        };
    private:
        string title;
        Callback callback;
        int order;
        bool* isMenuActive;
};