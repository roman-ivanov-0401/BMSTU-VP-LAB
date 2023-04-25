#pragma once
#include "../../signIn/signInModule/signIn.module.h"
#include "../../temp/addUser/addUserModule/addUser.module.h"
#include "../../temp/showUsers/showUsersModule/showUsers.module.h"
#include "../../temp/sortUsers/sortUsersModule/sortUsers.module.h"
#include "../../menuPoint/menuPoint.types.h"
#include "../menu.types.h"


namespace AdministratorIsAuthorized{
    void point1Cb(bool *isMenuActive);
    void point2Cb(bool *isMenuActive);
    void point3Cb(bool *isMenuActive);
}

namespace ModeratorIsAuthorized{
    void point1Cb(bool *isMenuActive);
    void point2Cb(bool *isMenuActive);
    void point3Cb(bool *isMenuActive);
}

namespace UserIsAuthorized{
    void point1Cb(bool *isMenuActive);
    void point2Cb(bool *isMenuActive);
    void point3Cb(bool *isMenuActive);
}
namespace NotAuthorized{
    void toSignUpCb(bool *isMenuActive);
    void toSignInCb(bool *isMenuActive);
}
    
MenuProps getMenuProps();
void toExitCb(bool *isMenuActive);
     

    
