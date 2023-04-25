#pragma once
#include "controller.h"
#include "view.h"
#include "model.h"

#include "../utils/inheritance.h"

using namespace std;

template<typename M, typename V, typename C>
class IModule{
    typedef typename condition<M, isChild<M, IModel>::value>::type Model;
    typedef typename condition<C, isChild<C, IController<M>>::value>::type Controller;
    typedef typename condition<V, isChild<V, IView<M, C>>::value>::type View;

    public:
        IModule(){
            this->model = new Model;
            this->controller = new Controller(this->model);
            this->view = new View(this->model, this->controller);
        }
        ~IModule(){
            delete this->view;
            delete this->controller;
            delete this->model;
        }

        virtual void run() = 0;
        
    protected:
        Model* model;
        Controller* controller;
        View* view;
};

