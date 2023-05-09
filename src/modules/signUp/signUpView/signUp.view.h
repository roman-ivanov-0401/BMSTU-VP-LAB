#ifndef LAB_SIGNUP_VIEW_H
#define LAB_SIGNUP_VIEW_H

#include "../../view.h"
#include "../signUpModel/signUp.model.h"
#include "../signUpController/signUp.controller.h"

class SignUpView: public IView<SignUpModel, SignUpController>{
public:
    SignUpView(SignUpModel* signUpModel, SignUpController* signUpController):
    IView<SignUpModel, SignUpController>(signUpModel, signUpController){}

    void showTitle();
    void showInputs();
    void update() override{};
    void render() override;
};

#endif //LAB_SIGNUP_VIEW_H
