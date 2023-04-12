#include <iostream>
#include "./addUser.module.h"
#include "../../../../storage/storage.h"
#include "../../../../entities/user/user.entity.h"

using namespace std;

void AddUserModule::run(){
    Storage *storage = Storage::getStorage();
    User user;
    cin >> user;
}