#include <iostream>
#include <vector>
#include "../../storage/storage.h"
#include "./userFiller.h"
#include "../../entities/moderator/moderator.entity.h"
#include "../../entities/administrator/administrator.entity.h"

using namespace std;

void UserFiller::fillSrorage(){
    Storage* store = Storage::getStorage();
    store->registerAccount(new Moderator(
            "moderator",
            "moderator"
            ));
    store->registerAccount(new Administrator(
            "admin",
            "admin"
            ));
    for(int i = 0; i < QUANTITY_OF_INITIAL_USERS; i++){
        store->registerAccount(new User(
            "name" + to_string(i + 1),
            "surname" + to_string(i + 1),
            "login" + to_string(i + 1),
            "password" + to_string(i + 1)
        ));
    }
}