#include <iostream>
#include "./signUp.view.h"

using namespace std;

void SignUpView::showInputs() {
    cout << "Enter login: ";
    string login;
    cin >> login;
    this->controller->setLogin(login);

    cout << "Enter password: ";
    string password;
    cin >> password;
    this->controller->setPassword(password);

    cout << "Enter name: ";
    string name;
    cin >> name;
    this->controller->setName(name);

    cout << "Enter surname: ";
    string surname;
    cin >> surname;
    this->controller->setSurname(surname);
}

void SignUpView::showTitle() {
    cout << "Registration | Laboratory work" << endl;
}

void SignUpView::render() {
    this->showTitle();
    this->showInputs();
    cin.get();
    cin.get();
    this->controller->changeIsMenuActive(false);
}