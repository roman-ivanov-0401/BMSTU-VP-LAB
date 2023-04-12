#pragma once
#include "../../module.h"
#include "../signInModel/signIn.model.h"
#include "../signInController/signIn.controller.h"
#include "../signInView/signIn.view.h"

class SignInModule: IModule<SignInModel, SignInView, SignInController>{
    public:
        SignInModule(): IModule(){};
        void run() override;
};