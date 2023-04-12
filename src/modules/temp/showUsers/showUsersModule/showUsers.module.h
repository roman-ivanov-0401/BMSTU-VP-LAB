#pragma once
#include "../../../module.h"
#include "../showUsersModel/showUsers.model.h"
#include "../showUsersController/showUsers.controller.h"
#include "../showUsersView/showUsers.view.h"

class ShowUsersModule: IModule<ShowUsersModel, ShowUsersView, ShowUsersController>{
    public:
        ShowUsersModule(): IModule(){};
        void run() override;
};