#include <iostream>

#include "./user.entity.h"
#include "../../storage/storage.h"

using namespace std;

ostream& operator<<(ostream &os, const User& user){
    cout << "Login: " << user.login << endl;
    cout << "Name: " << user.name << endl;
    cout << "Surname: " << user.surname << endl;
    return os;
}

istream& operator>>(istream &is, User& user){
    cout << "Enter login: ";
    cin >> user.login;
    cout << "Enter name: ";
    cin >> user.name;
    cout << "Enter surname: ";
    cin >> user.surname;
    cout << "Enter password: ";
    cin >> user.password;

    Storage* storage = Storage::getStorage();
    storage->getAccounts()->push_back(&user);
    return is;
}

bool User::operator> (const User& user){
    return this->name > user.name;
}

bool User::operator< (const User& user){
    return this->name < user.name;
}


