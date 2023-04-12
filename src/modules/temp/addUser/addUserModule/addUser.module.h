#pragma once
#include "../../../module.h"
#include "../addUserModel/addUser.model.h"
#include "../addUserController/addUser.controller.h"
#include "../addUserView/addUser.view.h"

class AddUserModule: IModule<AddUserModel, AddUserView, AddUserController>{
    public:
        AddUserModule(): IModule(){};
        void run() override;
};