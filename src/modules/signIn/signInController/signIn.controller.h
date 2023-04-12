#pragma once
#include <string>
#include "../../controller.h"
#include "../signInModel/signIn.model.h"

using namespace std;

class SignInController: public IController<SignInModel>{
    public:
        SignInController(SignInModel* signInModel)
        : IController(signInModel){};

        string getLogin();
        string getPassword();

        void setLogin(string login);
        void setPassword(string password);

        void loginAccount();
};