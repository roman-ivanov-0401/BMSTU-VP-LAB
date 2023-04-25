#include "./signIn.controller.h"
#include "../../../storage/storage.h"
#include "../../../entities/user/user.entity.h"
#include <iostream>

using namespace std;

string SignInController::getLogin(){
    return this->model->getLogin();
}

string SignInController::getPassword(){
    return this->model->getPassword();
}

void SignInController::setLogin(string login){
    this->model->setLogin(login);
}

void SignInController::setPassword(string password){
    this->model->setPassword(password);
}

void SignInController::loginAccount(){
    Storage* store = Storage::getStorage();

    for(int i = 0; i < store->getAccounts()->size(); i++)
    {

        if(
            store->getAccounts()->at(i)->getLogin() == this->model->getLogin()
            &&
            store->getAccounts()->at(i)->getPassword() == this->model->getPassword()
        )
        {

            store->setAuthorizedAccount(store->getAccounts()->at(i));
            this->model->changeIsMenuActive(false);
            break;
        }
    }

}   
