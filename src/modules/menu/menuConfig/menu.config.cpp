#include <iostream>

#include "menu.config.h"
#include "../../../storage/storage.h"

#include "../../../entities/administrator/administrator.entity.h"
#include "../../signUp/signUpModule/signUp.module.h"
#include "../menuModule/menu.module.h"


using namespace std;

void toExitCb(bool *isMenuActive){
    Storage* store = Storage::getStorage();
    *isMenuActive = false;
    store->closeApp();
}

void NotAuthorized::toSignInCb(bool *isMenuActive){
    SignInModule signInModule(isMenuActive);
    signInModule.run();
}

void NotAuthorized::toSignUpCb(bool *isMenuActive){
    SignUpModule signUpModule(isMenuActive);
    signUpModule.run();
}

void UserIsAuthorized::myDialogs(bool *isMenuActive){
    MenuModule menu(getUserMenuDialogsProps());
    menu.run();
}

void UserIsAuthorized::myTopics(bool *isMenuActive){
    MenuModule menu(getUserMenuTopicsProps());
    menu.run();
}

void UserIsAuthorized::myInterests(bool *isMenuActive){
    MenuModule menu(getUserMenuInterestsProps());
    menu.run();
}

void UserIsAuthorized::myReminders(bool *isMenuActive) {
    MenuModule menu(getUserMenuRemindersProps());
    menu.run();
}
void UserIsAuthorized::logOut(bool *isMenuActive) {
    Storage *store = Storage::getStorage();
    store->logout();
    *isMenuActive = false;
}

void UserIsAuthorized::MyDialogs::showADialog(bool *isMenuActive) {
    cout << "show a dialog" << endl;
    cin.get();
    cin.get();
}

void UserIsAuthorized::MyDialogs::showListOfDialogs(bool *isMenuActive) {
    MenuModule menu(getUserMenuDialogsShowListOfDialogs());
    menu.run();
}

void UserIsAuthorized::MyDialogs::back(bool *isMenuActive) {
    *isMenuActive = false;
}

void UserIsAuthorized::MyDialogs::textAMessage(bool *isMenuActive) {
    cout << "show list of a dialogs" << endl;
    cin.get();
    cin.get();
}

void UserIsAuthorized::MyDialogs::ShowListOfDialogs::search(bool *isMenuActive) {

}

void UserIsAuthorized::MyDialogs::ShowListOfDialogs::showInAsc(bool *isMenuActive) {

}

void UserIsAuthorized::MyDialogs::ShowListOfDialogs::showInDesc(bool *isMenuActive) {

}

void UserIsAuthorized::MyDialogs::ShowListOfDialogs::back(bool *isMenuActive) {
    *isMenuActive = false;
}

void UserIsAuthorized::MyInterests::showAnInterest(bool *isMenuActive) {

}

void UserIsAuthorized::MyInterests::showListOfInterests(bool *isMenuActive) {
    MenuModule menu(getUserMenuInterestsShowListOfInterests());
    menu.run();
}

void UserIsAuthorized::MyInterests::back(bool *isMenuActive) {
    *isMenuActive = false;
}

void UserIsAuthorized::MyInterests::ShowListOfInterests::showInDesc(bool *isMenuActive) {

}

void UserIsAuthorized::MyInterests::ShowListOfInterests::showInAsc(bool *isMenuActive) {

}

void UserIsAuthorized::MyInterests::ShowListOfInterests::search(bool *isMenuActive) {

}

void UserIsAuthorized::MyInterests::ShowListOfInterests::back(bool *isMenuActive) {
    *isMenuActive = false;
}

void UserIsAuthorized::MyReminders::addAReminder(bool *isMenuActive) {

}

void UserIsAuthorized::MyReminders::showAReminder(bool *isMenuActive) {

}

void UserIsAuthorized::MyReminders::showListOfReminders(bool *isMenuActive) {
    MenuModule menu(getUserMenuRemindersShowListOfReminders());
    menu.run();
}

void UserIsAuthorized::MyReminders::back(bool *isMenuActive) {
    *isMenuActive = false;
}

void UserIsAuthorized::MyReminders::ShowListOfReminders::search(bool *isMenuActive) {

}

void UserIsAuthorized::MyReminders::ShowListOfReminders::showInAsc(bool *isMenuActive) {

}

void UserIsAuthorized::MyReminders::ShowListOfReminders::showInDesc(bool *isMenuActive) {

}

void UserIsAuthorized::MyReminders::ShowListOfReminders::back(bool *isMenuActive) {
    *isMenuActive = false;
}

void UserIsAuthorized::MyTopics::showATopic(bool *isMenuActive) {

}

void UserIsAuthorized::MyTopics::showListOfTopics(bool *isMenuActive) {
    MenuModule menu(getUserMenuTopicsShowListOfTopics());
    menu.run();
}

void UserIsAuthorized::MyTopics::back(bool *isMenuActive) {
    *isMenuActive = false;
}

void UserIsAuthorized::MyTopics::ShowListOfTopics::showInDesc(bool *isMenuActive) {

}

void UserIsAuthorized::MyTopics::ShowListOfTopics::showInAsc(bool *isMenuActive) {

}

void UserIsAuthorized::MyTopics::ShowListOfTopics::search(bool *isMenuActive) {

}

void UserIsAuthorized::MyTopics::ShowListOfTopics::back(bool *isMenuActive) {
    *isMenuActive = false;
}

void ModeratorIsAuthorized::interests(bool *isMenuActive) {
    MenuModule menu(getModeratorMenuInterestsProps());
    menu.run();
}

void ModeratorIsAuthorized::Interests::showAnInterest(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Interests::showListOfAllInterests(bool *isMenuActive) {
    MenuModule menu(getModeratorMenuInterestsShowListOfInterestsProps());
    menu.run();
}

void ModeratorIsAuthorized::Interests::createAnInterest(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Interests::deleteAnInterest(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Interests::editAnInterest(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Interests::back(bool *isMenuActive) {
    *isMenuActive = false;
}

void ModeratorIsAuthorized::Interests::ShowListOfAllTopics::search(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Interests::ShowListOfAllTopics::sortInAsc(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Interests::ShowListOfAllTopics::sortInDesc(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Interests::ShowListOfAllTopics::back(bool *isMenuActive) {
    *isMenuActive = false;
}

void ModeratorIsAuthorized::reminders(bool *isMenuActive) {
    MenuModule menu(getModeratorMenuRemindersProps());
    menu.run();
}

void ModeratorIsAuthorized::Reminders::showAReminder(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Reminders::showListOfAllReminders(bool *isMenuActive) {
    MenuModule menu(getModeratorMenuRemindersShowListOfRemindersProps());
    menu.run();
}

void ModeratorIsAuthorized::Reminders::createAReminder(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Reminders::editAReminder(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Reminders::deleteAReminder(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Reminders::back(bool *isMenuActive) {
    *isMenuActive = false;
}

void ModeratorIsAuthorized::Reminders::ShowListOfAllReminders::sortInDesc(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Reminders::ShowListOfAllReminders::sortInAsc(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Reminders::ShowListOfAllReminders::search(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Reminders::ShowListOfAllReminders::back(bool *isMenuActive) {
    *isMenuActive = false;
}

void ModeratorIsAuthorized::topics(bool *isMenuActive) {
    MenuModule menu(getModeratorMenuTopicsProps());
    menu.run();
}

void ModeratorIsAuthorized::Topics::showATopic(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Topics::showListOfAllTopics(bool *isMenuActive) {
    MenuModule menu(getModeratorMenuTopicsShowListOfTopicsProps());
    menu.run();
}

void ModeratorIsAuthorized::Topics::createATopic(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Topics::editATopic(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Topics::deleteATopic(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Topics::back(bool *isMenuActive) {
    *isMenuActive = false;
}

void ModeratorIsAuthorized::Topics::ShowListOfAllTopics::search(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Topics::ShowListOfAllTopics::sortInAsc(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Topics::ShowListOfAllTopics::sortInDesc(bool *isMenuActive) {

}

void ModeratorIsAuthorized::Topics::ShowListOfAllTopics::back(bool *isMenuActive) {
    *isMenuActive = false;
}

void ModeratorIsAuthorized::logout(bool *isMenuActive) {
    Storage *store = Storage::getStorage();
    store->logout();
    *isMenuActive = false;
}

void AdministratorIsAuthorized::accounts(bool *isMenuActive) {
    MenuModule menu(getAdministratorMenuUsersProps());
    menu.run();
}

void AdministratorIsAuthorized::logout(bool *isMenuActive) {
    Storage *store = Storage::getStorage();
    store->logout();
    *isMenuActive = false;
}

void AdministratorIsAuthorized::Accounts::createAnAccount(bool *isMenuActive) {

}

void AdministratorIsAuthorized::Accounts::deleteAnAccount(bool *isMenuActive) {

}

void AdministratorIsAuthorized::Accounts::editAnAccount(bool *isMenuActive) {

}

void AdministratorIsAuthorized::Accounts::showAnAccount(bool *isMenuActive) {

}

void AdministratorIsAuthorized::Accounts::showListOfAccounts(bool *isMenuActive) {
    MenuModule menu(getAdministratorMenuUsersShowListOfUsersProps());
    menu.run();
}

void AdministratorIsAuthorized::Accounts::back(bool *isMenuActive) {
    *isMenuActive = false;
}

void AdministratorIsAuthorized::Accounts::ShowListOfAccounts::search(bool *isMenuActive) {

}

void AdministratorIsAuthorized::Accounts::ShowListOfAccounts::showInAsc(bool *isMenuActive) {

}

void AdministratorIsAuthorized::Accounts::ShowListOfAccounts::showInDesc(bool *isMenuActive) {

}

void AdministratorIsAuthorized::Accounts::ShowListOfAccounts::back(bool *isMenuActive) {
    *isMenuActive = false;
}

// -------------- UNATHORIZED ----------------

MenuPoints unauthorizrdMenuPoints{
    MenuPointProps{"Sign In", NotAuthorized::toSignInCb, 1},
    MenuPointProps{"Sign Up", NotAuthorized::toSignUpCb, 2},
    MenuPointProps{"Exit", toExitCb, 3}
};

// -------------- USER ----------------


MenuPoints userAuthorizedMenuPoints{
    MenuPointProps{"Dialogs", UserIsAuthorized::myDialogs, 1},
    MenuPointProps{"Topics", UserIsAuthorized::myTopics, 2},
    MenuPointProps{"Reminders", UserIsAuthorized::myReminders, 3},
    MenuPointProps{"Interests", UserIsAuthorized::myInterests, 4},
    MenuPointProps{"Log out", UserIsAuthorized::logOut, 5},
};

MenuPoints userAuthorizedMenuDialogsPoints{
    MenuPointProps{"Show a dialog", UserIsAuthorized::MyDialogs::showADialog, 1},
    MenuPointProps{"Show list of dialogs", UserIsAuthorized::MyDialogs::showListOfDialogs, 2},
    MenuPointProps{"Text message", UserIsAuthorized::MyDialogs::textAMessage, 3},
    MenuPointProps{"Back", UserIsAuthorized::MyDialogs::back, 4},
};

MenuPoints userAuthorizedMenuDialogsShowListOfDialogs{
    MenuPointProps{"Asc sort", UserIsAuthorized::MyDialogs::ShowListOfDialogs::showInAsc, 1},
    MenuPointProps{"Desc sort", UserIsAuthorized::MyDialogs::ShowListOfDialogs::showInDesc, 2},
    MenuPointProps{"Search", UserIsAuthorized::MyDialogs::ShowListOfDialogs::search, 3},
    MenuPointProps{"Back", UserIsAuthorized::MyDialogs::ShowListOfDialogs::back, 4},

};

MenuPoints userAuthorizedMenuInterestsPoints{
        MenuPointProps{"Show an interest", UserIsAuthorized::MyInterests::showAnInterest, 1},
        MenuPointProps{"Show list of interests", UserIsAuthorized::MyInterests::showListOfInterests, 2},
        MenuPointProps{"Back", UserIsAuthorized::MyInterests::back, 3},
};

MenuPoints userAuthorizedMenuInterestsShowListOfInterests{
        MenuPointProps{"Asc sort", UserIsAuthorized::MyDialogs::ShowListOfDialogs::showInAsc, 1},
        MenuPointProps{"Desc sort", UserIsAuthorized::MyDialogs::ShowListOfDialogs::showInDesc, 2},
        MenuPointProps{"Search", UserIsAuthorized::MyDialogs::ShowListOfDialogs::search, 3},
        MenuPointProps{"Back", UserIsAuthorized::MyDialogs::ShowListOfDialogs::back, 4},

};

MenuPoints userAuthorizedMenuTopicsPoints{
        MenuPointProps{"Show an topic", UserIsAuthorized::MyTopics::showATopic, 1},
        MenuPointProps{"Show list of topics", UserIsAuthorized::MyTopics::showListOfTopics, 2},
        MenuPointProps{"Back", UserIsAuthorized::MyTopics::back, 3},
};

MenuPoints userAuthorizedMenuTopicsShowListOfTopics{
        MenuPointProps{"Asc sort", UserIsAuthorized::MyTopics::ShowListOfTopics::showInAsc, 1},
        MenuPointProps{"Desc sort", UserIsAuthorized::MyTopics::ShowListOfTopics::showInDesc, 2},
        MenuPointProps{"Search", UserIsAuthorized::MyTopics::ShowListOfTopics::search, 3},
        MenuPointProps{"Back", UserIsAuthorized::MyTopics::ShowListOfTopics::back, 4}

};

MenuPoints userAuthorizedMenuRemindersPoints{
        MenuPointProps{"Show a reminder", UserIsAuthorized::MyReminders::showAReminder, 1},
        MenuPointProps{"Show list of reminders", UserIsAuthorized::MyReminders::showListOfReminders, 2},
        MenuPointProps{"Back", UserIsAuthorized::MyReminders::back, 3},
};

MenuPoints userAuthorizedMenuRemindersShowListOfReminders{
        MenuPointProps{"Asc sort", UserIsAuthorized::MyTopics::ShowListOfTopics::showInAsc, 1},
        MenuPointProps{"Desc sort", UserIsAuthorized::MyTopics::ShowListOfTopics::showInDesc, 2},
        MenuPointProps{"Search", UserIsAuthorized::MyTopics::ShowListOfTopics::search, 3},
        MenuPointProps{"Back", UserIsAuthorized::MyTopics::ShowListOfTopics::back, 4}
};

// -------------- MODER ----------------


MenuPoints moderatorAuthorizedMenuPoints{
    MenuPointProps{"Reminders", ModeratorIsAuthorized::reminders, 1},
    MenuPointProps{"Interests", ModeratorIsAuthorized::interests, 2},
    MenuPointProps{"Topics", ModeratorIsAuthorized::topics, 3},
    MenuPointProps{"Log out", ModeratorIsAuthorized::logout, 4}
};

MenuPoints moderatorAuthorizedMenuReminders{
    MenuPointProps{"Show list of all reminders", ModeratorIsAuthorized::Reminders::showListOfAllReminders, 1},
    MenuPointProps{"Show a reminder", ModeratorIsAuthorized::Reminders::showAReminder, 2},
    MenuPointProps{"Create a reminder", ModeratorIsAuthorized::Reminders::createAReminder, 3},
    MenuPointProps{"Edit a reminder", ModeratorIsAuthorized::Reminders::editAReminder, 4},
    MenuPointProps{"Delete a reminder", ModeratorIsAuthorized::Reminders::deleteAReminder, 5},
    MenuPointProps{"Back", ModeratorIsAuthorized::Reminders::back, 6},
};

MenuPoints moderatorAuthorizedMenuRemindersShowListOfAllReminders{
        MenuPointProps{"Asc sort", ModeratorIsAuthorized::Reminders::ShowListOfAllReminders::sortInAsc, 1},
        MenuPointProps{"Desc sort", ModeratorIsAuthorized::Reminders::ShowListOfAllReminders::sortInDesc, 2},
        MenuPointProps{"Search", ModeratorIsAuthorized::Reminders::ShowListOfAllReminders::search, 3},
        MenuPointProps{"Back", ModeratorIsAuthorized::Reminders::ShowListOfAllReminders::back, 4}

};

MenuPoints moderatorAuthorizedMenuInterests{
        MenuPointProps{"Show list of all interests", ModeratorIsAuthorized::Interests::showListOfAllInterests, 1},
        MenuPointProps{"Show an interest", ModeratorIsAuthorized::Interests::showAnInterest, 2},
        MenuPointProps{"Create an interest", ModeratorIsAuthorized::Interests::createAnInterest, 3},
        MenuPointProps{"Edit an interest", ModeratorIsAuthorized::Interests::editAnInterest, 4},
        MenuPointProps{"Delete an interest", ModeratorIsAuthorized::Interests::deleteAnInterest, 5},
        MenuPointProps{"Back", ModeratorIsAuthorized::Interests::back, 6},
};

MenuPoints moderatorAuthorizedMenuInterestsShowListOfAllInterests{
        MenuPointProps{"Asc sort", ModeratorIsAuthorized::Interests::ShowListOfAllTopics::sortInAsc, 1},
        MenuPointProps{"Desc sort", ModeratorIsAuthorized::Interests::ShowListOfAllTopics::sortInDesc, 2},
        MenuPointProps{"Search", ModeratorIsAuthorized::Interests::ShowListOfAllTopics::search, 3},
        MenuPointProps{"Back", ModeratorIsAuthorized::Interests::ShowListOfAllTopics::back, 4}
};

MenuPoints moderatorAuthorizedMenuTopics{
        MenuPointProps{"Show list of all topics", ModeratorIsAuthorized::Topics::showListOfAllTopics, 1},
        MenuPointProps{"Show a topic", ModeratorIsAuthorized::Topics::showATopic, 2},
        MenuPointProps{"Create a topic", ModeratorIsAuthorized::Topics::createATopic, 3},
        MenuPointProps{"Edit a topic", ModeratorIsAuthorized::Topics::editATopic, 4},
        MenuPointProps{"Delete a topic", ModeratorIsAuthorized::Topics::deleteATopic, 5},
        MenuPointProps{"Back", ModeratorIsAuthorized::Topics::back, 6},
};

MenuPoints moderatorAuthorizedMenuTopicsShowListOfAllTopics{
        MenuPointProps{"Asc sort", ModeratorIsAuthorized::Topics::ShowListOfAllTopics::sortInAsc, 1},
        MenuPointProps{"Desc sort", ModeratorIsAuthorized::Topics::ShowListOfAllTopics::sortInDesc, 2},
        MenuPointProps{"Search", ModeratorIsAuthorized::Topics::ShowListOfAllTopics::search, 3},
        MenuPointProps{"Back", ModeratorIsAuthorized::Topics::ShowListOfAllTopics::back, 4},
};

// -------------- ADMINISTRATOR ----------------

MenuPoints administratorAuthorizedMenuPoints{
        MenuPointProps{"Reminders", ModeratorIsAuthorized::reminders, 1},
        MenuPointProps{"Interests", ModeratorIsAuthorized::interests, 2},
        MenuPointProps{"Topics", ModeratorIsAuthorized::topics, 3},
        MenuPointProps{"Accounts", AdministratorIsAuthorized::accounts, 4},
        MenuPointProps{"Log out", ModeratorIsAuthorized::logout, 5}
};

MenuPoints administratorAuthorizedMenuAccounts{
        MenuPointProps{"Show list of all accounts", AdministratorIsAuthorized::Accounts::showListOfAccounts, 1},
        MenuPointProps{"Show an account", AdministratorIsAuthorized::Accounts::showAnAccount, 2},
        MenuPointProps{"Create an account", AdministratorIsAuthorized::Accounts::createAnAccount, 3},
        MenuPointProps{"Edit an account", AdministratorIsAuthorized::Accounts::editAnAccount, 4},
        MenuPointProps{"Delete an account", AdministratorIsAuthorized::Accounts::deleteAnAccount, 5},
        MenuPointProps{"Back", AdministratorIsAuthorized::Accounts::back, 6},
};

MenuPoints administratorAuthorizedMenuAccountsShowListofAllAccount{
        MenuPointProps{"Asc sort", AdministratorIsAuthorized::Accounts::ShowListOfAccounts::showInAsc, 1},
        MenuPointProps{"Desc sort", AdministratorIsAuthorized::Accounts::ShowListOfAccounts::showInDesc, 2},
        MenuPointProps{"Search", AdministratorIsAuthorized::Accounts::ShowListOfAccounts::search, 3},
        MenuPointProps{"Back", AdministratorIsAuthorized::Accounts::ShowListOfAccounts::back, 4},
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
        &moderatorAuthorizedMenuPoints,
        "Moderator menu"
    };
    MenuProps administratorAuthorizedMenuProps{
        &administratorAuthorizedMenuPoints,
        "Administrator menu"
    };

    Storage* store = Storage::getStorage();
    
     bool isAdmin = (bool)dynamic_cast<Administrator*>(store->getAuthorizedAccount());
     bool isModer = (bool)dynamic_cast<Moderator*>(store->getAuthorizedAccount());
     bool isUser = (bool)dynamic_cast<User*>(store->getAuthorizedAccount());

     if(isAdmin) return administratorAuthorizedMenuProps;
     if(isModer) return moderatorAuthorizedMenuProps;
     if(isUser) return userAuthorizedMenuProps;
     return unauthorizedMenuProps;
}

MenuProps getUserMenuDialogsProps(){
    return MenuProps{&userAuthorizedMenuDialogsPoints, "My dialogs"};
}

MenuProps getUserMenuDialogsShowListOfDialogs(){
    return MenuProps{&userAuthorizedMenuDialogsShowListOfDialogs, "List of my dialogs"};
}

MenuProps getUserMenuTopicsProps(){
    return  MenuProps{&userAuthorizedMenuTopicsPoints, "My topics"};
}

MenuProps getUserMenuTopicsShowListOfTopics(){
    return MenuProps{&userAuthorizedMenuTopicsShowListOfTopics, "List of my dialogs"};
}

MenuProps getUserMenuRemindersProps(){
    return MenuProps{&userAuthorizedMenuRemindersPoints, "My reminders"};
}

MenuProps getUserMenuRemindersShowListOfReminders(){
    return MenuProps{&userAuthorizedMenuRemindersShowListOfReminders, "List of my reminders"};
}

MenuProps getUserMenuInterestsProps(){
    return  MenuProps{&userAuthorizedMenuInterestsPoints, "My interests"};
}

MenuProps getUserMenuInterestsShowListOfInterests(){
    return MenuProps{&userAuthorizedMenuInterestsShowListOfInterests, "List of my interests"};
}

MenuProps getModeratorMenuTopicsProps(){
    return MenuProps{&moderatorAuthorizedMenuTopics, "Topics"};
}

MenuProps getModeratorMenuTopicsShowListOfTopicsProps(){
    return MenuProps{&moderatorAuthorizedMenuTopicsShowListOfAllTopics, "Show topics"};
}

MenuProps getModeratorMenuInterestsProps(){
    return MenuProps{&moderatorAuthorizedMenuInterests, "Interests"};
}

MenuProps getModeratorMenuInterestsShowListOfInterestsProps(){
    return MenuProps{&moderatorAuthorizedMenuInterestsShowListOfAllInterests, "Show interests"};
}

MenuProps getModeratorMenuRemindersProps(){
    return MenuProps{&moderatorAuthorizedMenuReminders, "Reminders"};
}

MenuProps getModeratorMenuRemindersShowListOfRemindersProps(){
    return MenuProps{&moderatorAuthorizedMenuRemindersShowListOfAllReminders, "Show reminders"};
}

MenuProps getAdministratorMenuUsersProps(){
    return MenuProps{&administratorAuthorizedMenuAccounts, "Accounts"};
}

MenuProps getAdministratorMenuUsersShowListOfUsersProps(){
    return MenuProps{&administratorAuthorizedMenuAccountsShowListofAllAccount, "Show accounts"};
}