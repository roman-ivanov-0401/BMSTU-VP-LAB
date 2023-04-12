#pragma once
#include "../moderator/moderator.entity.h"

class Administrator: public Moderator{
    public:
        Administrator(string name, string surname, string login, string password)
        :Moderator(login, password)
        {};
};