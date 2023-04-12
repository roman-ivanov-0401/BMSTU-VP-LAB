#pragma once
#include <vector>

#include "../account/account.entity.h"
#include "../reminder/reminder.entity.h"

using namespace std;

class User;

ostream& operator<<(ostream &os, const User& user);
istream& operator>>(istream &is, User& user);

class User: public Account{
    public:
        User(){};
        User(string name, string surname, string login, string password)
        :Account(login, password)
        {
            this->name = name;
            this->surname = surname;
            this->reminders = new vector<Reminder*>;
        };

        friend ostream& operator<<(ostream &os, const User& user);
        friend istream& operator>>(istream &is, User& user);
        bool operator> (const User& user);
        bool operator< (const User& user);

        string getName(){
            return this->name;
        }

        string getSurname(){
            return this->surname;
        }

        void setName(string name){
            this->name = name;
        }

        void setSurname(string surname){
            this->surname = surname;
        }
    private:
        string name;
        string surname;
        vector<Reminder*>* reminders;
};