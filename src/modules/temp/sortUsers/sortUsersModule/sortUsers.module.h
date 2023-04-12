#pragma once
#include "../../../module.h"
#include "../sortUsersModel/sortUsers.model.h"
#include "../sortUsersController/sortUsers.controller.h"
#include "../sortUsersView/sortUsers.view.h"

class SortUsersModule: IModule<SortUsersModel, SortUsersView, SortUsersController>{
    public:
        SortUsersModule(): IModule(){};
        void run() override;
};