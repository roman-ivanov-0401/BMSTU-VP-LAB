#pragma once
#include "../account/account.entity.h"

class Moderator: public Account{
    public:
        Moderator(string login, string password)
        :Account(login, password)
        {};
};