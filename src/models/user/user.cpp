#include "./user.h"


namespace Models{
    User::User(
        string name,
        string surname,
        int age,
        string login,
        string password,
        vector<Roles> roles
        )
    :
    name(name),
    surname(surname),
    age(age),
    login(login),
    password(password),
    roles(roles){};

    string User::getName(){
        return this->name;
    }

    string User::getSurname(){
        return this->surname;
    }

    int User::getAge(){
        return this->age;
    }

    string User::getLogin(){
        return this->name;
    }

    string User::getPassword(){
        return this->name;
    }

    vector<Roles>* User::getRoles(){
        return &this->roles;
    }

    void User::setName(string name){
        this->name = name;
    }

    void User::setSurname(string surname){
        this->surname = surname;
    }

    void User::setAge(int age){
        this->age = age;
    }

    void User::setLogin(string login){
        this->login = login;
    }

    void User::setPassword(string password){
        this->password = password;
    }
}