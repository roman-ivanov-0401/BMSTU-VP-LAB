#include <iostream>
#include <string>

#include "CMenuItem.h"

using namespace std;

namespace CM{
    CMenuItem::CMenuItem(string title, Cb callback) : title(title), cb(callback){};

    string CMenuItem::getTitle(){
        return this->title;
    }

    void CMenuItem::setTitle(string newTitle){
        this->title = newTitle;
    }

    void CMenuItem::renderHeader(){
        cout << this->title << endl;
    }

    void CMenuItem::pick(){
        cout << "\033[2J\033[1;1H";
        this->cb();
        cout << endl << "Press <Enter> to continue...";
        cin.ignore();
        cin.get();
        system("clear");
    }
}