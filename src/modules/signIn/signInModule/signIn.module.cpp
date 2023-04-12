#include <iostream>
#include "./signIn.module.h"

using namespace std;

void SignInModule::run(){

    this->view->render();
    
    this->controller->loginAccount();
}