#ifndef LAB_SIGNUP_CONTROLLER_H
#define LAB_SIGNUP_CONTROLLER_H

#include "../../controller.h"
#include "../signUpModel/signUp.model.h"
#include "../../../entities/user/user.entity.h"

class SignUpController: public IController<SignUpModel>{
public:
    SignUpController(SignUpModel* signUpModel)
    : IController<SignUpModel>(signUpModel){}

    string getLogin(){
        return this->model->getLogin();
    }
    string getPassword(){
        return this->model->getPassword();
    }
    string getName(){
        return this->model->getName();
    }
    string getSurname(){
        return this->model->getPassword();
    }

    bool getIsMenuActive(){
        return this->model->getIsMenuActive();
    }

    void setLogin(string newLogin){
        this->model->setLogin(newLogin);
    }

    void setPassword(string newPassword){
        this->model->setPassword(newPassword);
    }

    void setName(string newName){
        this->model->setName(newName);
    }

    void setSurname(string newSurname){
        this->model->setSurname(newSurname);
    }

    void setIsMenuActive(bool* value){
        this->model->setIsMenuActive(value);
    }

    void changeIsMenuActive(bool value){
        this-model->changeIsMenuActive(value);
    }

    void registerUser(User* regUser);
};
#endif //LAB_SIGNUP_CONTROLLER_H
