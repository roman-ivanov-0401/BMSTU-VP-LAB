#pragma once
#include "../../signIn/signInModule/signIn.module.h"
#include "../../temp/addUser/addUserModule/addUser.module.h"
#include "../../temp/showUsers/showUsersModule/showUsers.module.h"
#include "../../temp/sortUsers/sortUsersModule/sortUsers.module.h"
#include "../../menuPoint/menuPoint.types.h"
#include "../menu.types.h"


namespace AdministratorIsAuthorized{
    void accounts(bool *isMenuActive);
    void logout(bool *isMenuActive);

    namespace Accounts{
        void showAnAccount (bool *isMenuActive);
        void showListOfAccounts(bool *isMenuActive);
        void createAnAccount(bool *isMenuActive);
        void editAnAccount(bool *isMenuActive);
        void deleteAnAccount(bool *isMenuActive);
        void back(bool *isMenuActive);

        namespace ShowListOfAccounts{
            void showInAsc(bool *isMenuActive);
            void showInDesc(bool *isMenuActive);
            void search(bool *isMenuActive);
            void back(bool *isMenuActive);
        }
    }
}

namespace ModeratorIsAuthorized{
    void topics(bool *isMenuActive);
    void interests(bool *isMenuActive);
    void reminders(bool *isMenuActive);
    void logout(bool *isMenuActive);

    namespace Topics{
        void showListOfAllTopics(bool *isMenuActive);
        void showATopic(bool *isMenuActive);
        void createATopic(bool *isMenuActive);
        void editATopic(bool *isMenuActive);
        void deleteATopic(bool *isMenuActive);
        void back(bool *isMenuActive);

        namespace ShowListOfAllTopics{
            void sortInAsc(bool *isMenuActive);
            void sortInDesc(bool *isMenuActive);
            void search(bool *isMenuActive);
            void back(bool *isMenuActive);
        }

    }

    namespace Interests{
        void showListOfAllInterests(bool *isMenuActive);
        void showAnInterest(bool *isMenuActive);
        void createAnInterest(bool *isMenuActive);
        void editAnInterest(bool *isMenuActive);
        void deleteAnInterest(bool *isMenuActive);
        void back(bool *isMenuActive);

        namespace ShowListOfAllTopics{
            void sortInAsc(bool *isMenuActive);
            void sortInDesc(bool *isMenuActive);
            void search(bool *isMenuActive);
            void back(bool *isMenuActive);
        }
    }

    namespace Reminders{
        void showListOfAllReminders(bool *isMenuActive);
        void showAReminder(bool *isMenuActive);
        void createAReminder(bool *isMenuActive);
        void editAReminder(bool *isMenuActive);
        void deleteAReminder(bool *isMenuActive);
        void back(bool *isMenuActive);

        namespace ShowListOfAllReminders{
            void sortInAsc(bool *isMenuActive);
            void sortInDesc(bool *isMenuActive);
            void search(bool *isMenuActive);
            void back(bool *isMenuActive);
        }
    }
}

namespace UserIsAuthorized{
    void myDialogs(bool *isMenuActive);
    void myTopics(bool *isMenuActive);
    void myInterests(bool *isMenuActive);
    void myReminders(bool *isMenuActive);
    void logOut(bool *isMenuActive);

    namespace MyDialogs{
        void showADialog (bool *isMenuActive);
        void showListOfDialogs(bool *isMenuActive);
        void textAMessage(bool *isMenuActive);
        void back(bool *isMenuActive);

        namespace ShowListOfDialogs{
            void showInAsc(bool *isMenuActive);
            void showInDesc(bool *isMenuActive);
            void search(bool *isMenuActive);
            void back(bool *isMenuActive);
        }
    }

    namespace MyTopics{
        void showATopic (bool *isMenuActive);
        void showListOfTopics(bool *isMenuActive);
        void back(bool *isMenuActive);

        namespace ShowListOfTopics{
            void showInAsc(bool *isMenuActive);
            void showInDesc(bool *isMenuActive);
            void search(bool *isMenuActive);
            void back(bool *isMenuActive);
        }
    }

    namespace MyInterests{
        void showAnInterest (bool *isMenuActive);
        void showListOfInterests(bool *isMenuActive);
        void back(bool *isMenuActive);

        namespace ShowListOfInterests{
            void showInAsc(bool *isMenuActive);
            void showInDesc(bool *isMenuActive);
            void search(bool *isMenuActive);
            void back(bool *isMenuActive);
        }
    }

    namespace MyReminders{
        void showAReminder (bool *isMenuActive);
        void showListOfReminders(bool *isMenuActive);
        void addAReminder(bool *isMenuActive);
        void back(bool *isMenuActive);

        namespace ShowListOfReminders{
            void showInAsc(bool *isMenuActive);
            void showInDesc(bool *isMenuActive);
            void search(bool *isMenuActive);
            void back(bool *isMenuActive);
        }
    }
}
namespace NotAuthorized{
    void toSignUpCb(bool *isMenuActive);
    void toSignInCb(bool *isMenuActive);
}


MenuProps getMenuProps();
MenuProps getUserMenuDialogsProps();
MenuProps getUserMenuDialogsShowListOfDialogs();
MenuProps getUserMenuTopicsProps();
MenuProps getUserMenuTopicsShowListOfTopics();
MenuProps getUserMenuRemindersProps();
MenuProps getUserMenuRemindersShowListOfReminders();
MenuProps getUserMenuInterestsProps();
MenuProps getUserMenuInterestsShowListOfInterests();

MenuProps getModeratorMenuTopicsProps();
MenuProps getModeratorMenuTopicsShowListOfTopicsProps();
MenuProps getModeratorMenuInterestsProps();
MenuProps getModeratorMenuInterestsShowListOfInterestsProps();
MenuProps getModeratorMenuRemindersProps();
MenuProps getModeratorMenuRemindersShowListOfRemindersProps();


MenuProps getAdministratorMenuUsersProps();
MenuProps getAdministratorMenuUsersShowListOfUsersProps();

void toExitCb(bool *isMenuActive);

