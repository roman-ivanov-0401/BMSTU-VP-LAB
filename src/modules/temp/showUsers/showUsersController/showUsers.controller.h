#pragma once
#include <string>
#include "../../../controller.h"
#include "../showUsersModel/showUsers.model.h"

using namespace std;

class ShowUsersController: public IController<ShowUsersModel>{
    public:
        ShowUsersController(ShowUsersModel* showUsersModel)
        : IController(showUsersModel){};

      
};