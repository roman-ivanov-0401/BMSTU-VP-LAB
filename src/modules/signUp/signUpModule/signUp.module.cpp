#include "./signUp.module.h"

void SignUpModule::run() {
    this->view->render();
    User* newUser = new User(
            this->controller->getLogin(),
            this->controller->getPassword(),
            this->controller->getName(),
            this->controller->getSurname()
            );
    this->controller->registerUser(newUser);
}