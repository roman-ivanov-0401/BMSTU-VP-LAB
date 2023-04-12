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

        void setTitle(string title){
            this->title = title;
        }

        void setCallback(Callback callback){
            this->callback = callback;
        }

        void setOrder(int order){
            this->order = order;
        }
    private:
        string title;
        Callback callback;
        int order;
};