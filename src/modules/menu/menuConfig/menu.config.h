#pragma once
#include "../../signIn/signInModule/signIn.module.h"
#include "../../temp/addUser/addUserModule/addUser.module.h"
#include "../../temp/showUsers/showUsersModule/showUsers.module.h"
#include "../../temp/sortUsers/sortUsersModule/sortUsers.module.h"
#include "../../menuPoint/menuPoint.types.h"
#include "../menu.types.h"


namespace AdministratorIsAuthorized{
    void point1Cb();
    void point2Cb();
    void point3Cb();
}

namespace ModeratorIsAuthorized{
    void point1Cb();
    void point2Cb();
    void point3Cb();
}

namespace UserIsAuthorized{
    void point1Cb();
    void point2Cb();
    void point3Cb();
}
namespace NotAuthorized{
    void toSignUpCb();
    void toSignInCb();
}
    
MenuProps getMenuProps();
void toExitCb();
     

    
