#pragma once
#include <set>
#include <vector>
#include "../entities/account/account.entity.h"
#include "../entities/dialog/dialog.entity.h"
#include "../entities/interest/interest.entity.h"
#include "../entities/topic/topic.entity.h"

using namespace std;

class Storage{
    private:
        Storage(){};
        static Storage* storage;
        Account* authorizedAccount;
        vector<Account*> accounts;
        vector<Dialog*> dialogs;
        vector<Interest*> interests;
        vector<Topic*> topics;
        bool toCloseApp = false;
        bool isMenuActive = false;
    public:
        //void operator = (const Storage&) = delete;
        //Storage(const Storage&) = delete;
        static Storage* getStorage();  
        Account* getAuthorizedAccount();
        bool getToCloseApp();

        void setAuthorizedAccount(Account*);

        vector<Account*>* getAccounts();
        void closeApp();
        void registerAccount(Account*);

        bool getIsMenuActive();
        void setIsMenuActive(bool value);
};

