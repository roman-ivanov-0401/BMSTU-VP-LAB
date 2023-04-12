#include <iostream>
#include <vector>
#include "../../storage/storage.h"
#include "./userFiller.h"

using namespace std;

void UserFiller::fillSrorage(){
    Storage* store = Storage::getStorage();
    for(int i = 0; i < QUANTITY_OF_INITIAL_USERS; i++){
        store->registerAccount(new User(
            "name" + to_string(i + 1),
            "surname" + to_string(i + 1),
            "login" + to_string(i + 1),
            "password" + to_string(i + 1)
        ));
    }
}