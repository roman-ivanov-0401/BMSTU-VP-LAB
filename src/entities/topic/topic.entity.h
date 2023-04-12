#pragma once
#include <set>
#include <string>
#include "../user/user.entity.h"

using namespace std;

class Topic{
    public:
        Topic(string name, string description, set<User*> members)
        : name(name), members(members), description(description)
        {}

        string getName(){
            return this->name;
        }

        string getDescription(){
            return this->description;
        }

        set<User*>* getMembers(){
            return &this->members;
        }

        void setName(string name){
            this->name = name;
        }

        void setDescription(string description){
            this->description = description;
        }


        void setMembers(set<User*>& members){
            this->members = members;
        }

    private:
        string name;
        string description;
        set<User*> members;
};