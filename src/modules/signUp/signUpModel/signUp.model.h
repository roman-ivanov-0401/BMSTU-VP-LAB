#ifndef LAB_SIGNUP_MODEL_H
#define LAB_SIGNUP_MODEL_H
#include <string>
#include "../../model.h"

using namespace std;

class SignUpModel: public IModel{
private:
    string login;
    string password;
    string name;
    string surname;
    bool* isMenuActive;
public:
    string getLogin(){
        return this->login;
    }
    string getPassword(){
        return this->password;
    }
    string getName(){
        return this->name;
    }
    string getSurname(){
        return this->surname;
    }

    bool getIsMenuActive(){
        return *this->isMenuActive;
    }

    void setIsMenuActive(bool* value){
        this->isMenuActive = value;
    }

    bool changeIsMenuActive(bool value){
        *this->isMenuActive = value;
    }
    void setLogin(string newLogin){
        this->login = newLogin;
    }

    void setPassword(string newPassword){
        this->password = newPassword;
    }

    void setName(string newName){
        this->name = newName;
    }

    void setSurname(string newSurname){
        this->surname = newSurname;
    }
};

#endif //LAB_SIGNUP_MODEL_H
