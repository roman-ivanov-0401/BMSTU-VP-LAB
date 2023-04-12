#include "./signIn.controller.h"
#include "../../../storage/storage.h"
#include <iostream>

using namespace std;

string SignInController::getLogin(){
    cout << "controller: " << this->model->getLogin() << endl;
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
        // for(int j = 0; j < (*store->getAccounts())[i].getLogin().size(); j++){
        //     cout << j << ": ";
        //     cout << (*store->getAccounts())[i].getLogin()[j] << endl;
        // }
        // cout << endl;
        // for(int j = 0; j < this->model->getLogin().size(); j++){
        //     cout << j << ": ";
        //     cout << this->model->getLogin()[j] << endl;
        // }
        // cout << endl;
        //
        // for(int j = 0; j < (*store->getAccounts())[i].getPassword().size(); j++){
        //     cout << (*store->getAccounts())[i].getPassword()[j];
        // }
        // cout << endl;

        // for(int j = 0; j < this->model->getPassword().size(); j++){
        //     cout << this->model->getPassword()[j];
        // }
        if(
            (*store->getAccounts())[i].getLogin().compare(this->model->getLogin()) == 0
            &&
            (*store->getAccounts())[i].getPassword().compare(this->model->getPassword()) == 0
        )
        {
            store->setAuthorizedAccount(&(*store->getAccounts())[i]);
            break;
        }
    }
}   
