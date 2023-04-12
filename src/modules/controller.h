#pragma once
#include "model.h"

#include "../utils/inheritance.h"

template<typename M>
class IController{
    typedef typename condition<M, isChild<M, IModel>::value>::type Model;
    public:
        IController(Model* newModel){
            this->model = newModel;
        }
    protected:
        Model* model;
};