#pragma once
#include <string>
#include <vector>

using namespace std;

enum Roles{
    ROLE_USER,
    ROLE_ADMIN
};

class User{
    public:
        User(string name, string surname, int age, string login, string password, vector<Roles>);
        
        string getSurname();
        string getName();
        int getAge();
        string getLogin();
        string getPassword();
        vector<Roles>* getRoles();

        void setName(string name);
        void setSurname(string surname);
        void setAge(int age);
        void setLogin(string login);
        void setPassword(string password);
    protected:
        string name;
        string surname;
        int age;
        string login;
        string password;
        vector<Roles> roles;
};