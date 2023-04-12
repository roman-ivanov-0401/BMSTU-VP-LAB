#include <iostream>
#include "./showUsers.module.h"
#include "../../../../storage/storage.h"

using namespace std;

void ShowUsersModule::run(){
    Storage* storage = Storage::getStorage();
    for(int i = 0; i < storage->getUsers()->size(); i++){
        cout << (*storage->getUsers())[i];
        cout << endl;
    }

    cin.get();
    cin.get();
}