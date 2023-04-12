#pragma once

#include "model.h"
#include "observe.h"
#include "controller.h"

#include "../utils/inheritance.h"

template<typename M, typename C>
class IView: public Observer{
    typedef typename condition<M, isChild<M, IModel>::value>::type Model;
    typedef typename condition<C, isChild<C, IController<M>>::value>::type Controller;

    public:
        IView(Model* newModel, Controller* newController){
            this->model = newModel;
            this->controller = newController;
        };
        ~IView(){};

        virtual void render() = 0; 
    protected:
        Model* model;
        Controller* controller;
};

