#include <iostream>
#include <string>

#include "menu.config.h"
#include "../../../storage/storage.h"

#include "../../../entities/administrator/administrator.entity.h"
#include "../../../entities/moderator/moderator.entity.h"
#include "../../../entities/user/user.entity.h"

using namespace std;

void toExitCb(){
    Storage* store = Storage::getStorage();
    store->closeApp();
}

void NotAuthorized::toSignInCb(){
    SignInModule signInModule;
    signInModule.run();
}

void NotAuthorized::toSignUpCb(){
    cout << "toSignUpCallback" << endl;
    cin.get();
    cin.get();
}

void UserIsAuthorized::point1Cb(){
    cout << "point1Callback" << endl;
}

void UserIsAuthorized::point2Cb(){
    cout << "point2Callback" << endl;
}

void UserIsAuthorized::point3Cb(){
    cout << "point3Callback" << endl;
}

void ModeratorIsAuthorized::point1Cb(){
    cout << "point1Callback" << endl;
}

void ModeratorIsAuthorized::point2Cb(){
    cout << "point2Callback" << endl;
}

void ModeratorIsAuthorized::point3Cb(){
    cout << "point3Callback" << endl;
}

void AdministratorIsAuthorized::point1Cb(){
    ShowUsersModule showUsersModule;
    showUsersModule.run();
}

void AdministratorIsAuthorized::point2Cb(){
    AddUserModule addUserModule;
    addUserModule.run();
}

void AdministratorIsAuthorized::point3Cb(){
    SortUsersModule sortUsersModule;
    sortUsersModule.run();
}

MenuPoints unauthorizrdMenuPoints{
    MenuPointProps{"Sign In", NotAuthorized::toSignInCb, 1},
    MenuPointProps{"Sign Up", NotAuthorized::toSignUpCb, 2},
    MenuPointProps{"Exit", toExitCb, 3}
};

MenuPoints userAuthorizedMenuPoints{
    MenuPointProps{"User option 1", UserIsAuthorized::point1Cb, 1},
    MenuPointProps{"User option 2", UserIsAuthorized::point2Cb, 2},
    MenuPointProps{"User option 3", UserIsAuthorized::point3Cb, 3},
    MenuPointProps{"Exit", toExitCb, 4}
};

MenuPoints moderatorAuthorizedMenuPoints{
    MenuPointProps{"Moderator option 1", ModeratorIsAuthorized::point1Cb, 1},
    MenuPointProps{"Moderator option 2", ModeratorIsAuthorized::point2Cb, 2},
    MenuPointProps{"Moderator option 3", ModeratorIsAuthorized::point3Cb, 3},
    MenuPointProps{"Exit", toExitCb, 4}
};

MenuPoints administratorAuthorizedMenuPoints{
    MenuPointProps{"Show users", AdministratorIsAuthorized::point1Cb, 1},
    MenuPointProps{"Add a user", AdministratorIsAuthorized::point2Cb, 2},
    MenuPointProps{"Sort users", AdministratorIsAuthorized::point3Cb, 3},
    MenuPointProps{"Exit", toExitCb, 4}
};

MenuProps getMenuProps(){
    MenuProps unauthorizedMenuProps{
        &unauthorizrdMenuPoints,
        "Not authorized menu"
    };
    MenuProps userAuthorizedMenuProps{
        &userAuthorizedMenuPoints,
        "User menu"
    };
    MenuProps moderatorAuthorizedMenuProps{
        &unauthorizrdMenuPoints,
        "Moderator menu"
    };
    MenuProps administratorAuthorizedMenuProps{
        &administratorAuthorizedMenuPoints,
        "Administrator menu"
    };

    Storage* store = Storage::getStorage();
    
    // bool isAdmin = (bool)dynamic_cast<Administrator*>(store->getAuthorizedAccount());
    // bool isModer = (bool)dynamic_cast<Moderator*>(store->getAuthorizedAccount());
    // bool isUser = (bool)dynamic_cast<User*>(store->getAuthorizedAccount());

    // if(isAdmin) return administratorAuthorizedMenuProps;
    // if(isModer) return moderatorAuthorizedMenuProps;
    // if(isUser) return userAuthorizedMenuProps;
    return administratorAuthorizedMenuProps;
}