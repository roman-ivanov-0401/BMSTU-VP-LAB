#pragma once
#include <string>
#include "../../model.h"
#include <iostream>

using namespace std;

class SignInModel: public IModel{
    public: 
        string getLogin(){
            cout << "Model: " << this->login << endl;
            return this->login;
        }

        string getPassword(){
            return this->password;
        }

        void setLogin(string login){
            
            this->login = login;
        }

        void setPassword(string password){
            this->password = password;
        }
    private:
        string login;
        string password;
};