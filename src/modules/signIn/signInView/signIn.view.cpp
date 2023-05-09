#include <iostream>
#include <string>

using namespace std;

#include "./signIn.view.h"

void SignInView::wrongData() {
    cout << "Wrong email or password" << endl;
    cin.get();
    cin.get();
}

void SignInView::render(){
    cout << "Sing In:" << endl;

    cout << "Enter login: ";
    string login;
    cin >> login;
    this->controller->setLogin(login);

    cout << "Enter password: ";
    string password;
    cin >> password;
    this->controller->setPassword(password);
    
    login = this->controller->getLogin();
    password = this->controller->getPassword();
}