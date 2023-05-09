#ifndef LAB_SIGNUP_MODULE_H
#define LAB_SIGNUP_MODULE_H

#include "../../module.h"
#include "../signUpModel/signUp.model.h"
#include "../signUpView/signUp.view.h"

class SignUpModule: IModule<SignUpModel, SignUpView, SignUpController>{
public:
    SignUpModule(bool* isMenuActive): IModule<SignUpModel, SignUpView, SignUpController>(){
        this->model->setIsMenuActive(isMenuActive);
    }
    void run() override;
};

#endif //LAB_SIGNUP_MODULE_H
