#pragma once
#include <string>
#include "../../model.h"
#include <iostream>

using namespace std;

class SignInModel: public IModel{
    public: 
        string getLogin(){
            return this->login;
        }

        string getPassword(){
            return this->password;
        }

        bool getIsMenuActive(){
            return this->isMenuActive;
        }

        void setLogin(string newLogin){
            
            this->login = newLogin;
        }

        void setPassword(string newPassword){
            this->password = newPassword;
        }

        void setIsMenuActive(bool* value){
            this->isMenuActive = value;
        }

        void changeIsMenuActive(bool value){
            *this->isMenuActive = value;
        }
    private:
        string login;
        string password;
        bool* isMenuActive;
};