#pragma once
#include <string>
#include "../../../controller.h"
#include "../sortUsersModel/sortUsers.model.h"

using namespace std;

class SortUsersController: public IController<SortUsersModel>{
    public:
        SortUsersController(SortUsersModel* sortUsersModel)
        : IController(sortUsersModel){};

      
};