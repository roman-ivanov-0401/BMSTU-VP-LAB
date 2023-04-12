#pragma once
#include <set>
#include <string>
#include "../user/user.entity.h"

using namespace std;

class Interest{
    public:
        Interest(string name, set<User*> members)
        : name(name), members(members)
        {};

        string getName(){
            return this->name;
        }

        set<User*>* getMembers(){
            return &this->members;
        }

        void setName(string name){
            this->name = name;
        }

        void setMembers(set<User*>& members){
            this->members = members;
        }

    private:
        string name;
        set<User*> members;
};