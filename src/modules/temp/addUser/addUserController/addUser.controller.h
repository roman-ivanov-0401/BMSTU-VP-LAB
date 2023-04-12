#pragma once
#include <string>
#include "../../../controller.h"
#include "../addUserModel/addUser.model.h"

using namespace std;

class AddUserController: public IController<AddUserModel>{
    public:
        AddUserController(AddUserModel* addUserModel)
        : IController(addUserModel){};

      
};