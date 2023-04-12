#pragma once
#include <iostream>

using namespace std;


class Account{
    public:
        Account(){};
        Account(string login, string password)
        : login(login), password(password)
        {};

        virtual void kostil(){};
        string getLogin(){
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
    protected:
        
        string login;
        string password;
};