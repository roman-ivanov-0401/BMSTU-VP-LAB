#include "storage.h"

Storage* Storage::storage = 0;

Storage* Storage::getStorage(){
    if(storage == 0)
        storage = new Storage();

    return storage;
}

Account* Storage::getAuthorizedAccount(){
    return this->authorizedAccount;
}

void Storage::closeApp(){
    this->toCloseApp = true;
}

bool Storage::getToCloseApp(){
    return this->toCloseApp;
}

void Storage::registerAccount(Account* newAccount){
    this->accounts.push_back(newAccount);
}

vector<Account*>* Storage::getAccounts(){
    return &this->accounts;
}

void Storage::setAuthorizedAccount(Account* authAc){
    this->authorizedAccount = authAc;
}

void Storage::setIsMenuActive(bool value) {
    this->isMenuActive = value;
}

bool Storage::getIsMenuActive() {
    return this->isMenuActive;
}