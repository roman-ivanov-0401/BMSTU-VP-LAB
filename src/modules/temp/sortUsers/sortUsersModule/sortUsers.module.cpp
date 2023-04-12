#include <iostream>
#include "./sortUsers.module.h"
#include "../../../../storage/storage.h"


using namespace std;

void SortUsersModule::run(){
    Storage* storage = Storage::getStorage();
    for(int i = 0; i < storage->getUsers()->size(); i++){
        for(int j = 0; j < storage->getUsers()->size() - 1; j++){
            if((*storage->getUsers())[j] > (*storage->getUsers())[j + 1]){
                User tempUser = (*storage->getUsers())[j];
                (*storage->getUsers())[j] = (*storage->getUsers())[j + 1];
                (*storage->getUsers())[j + 1] = tempUser;
            }
        }
    }

    for(int i = 0; i < storage->getUsers()->size(); i++){
        cout << (*storage->getUsers())[i];
        cout << endl;
    }

    cin.get();
    cin.get();
}