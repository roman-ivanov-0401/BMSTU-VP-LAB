#pragma once
#include "../../view.h"
#include "../signInModel/signIn.model.h"
#include "../signInController/signIn.controller.h"

class SignInView: public IView<SignInModel, SignInController>{
    public:
        SignInView(SignInModel* signInModel, SignInController* signInController)
        : IView(signInModel, signInController){};

        void update() override{};
        void render() override;
};