#pragma once
#include <string>

using namespace std;

class MenuPoint{
    typedef void (*Callback)();
    private:
        string title;
        Callback callback;
    public:
        MenuPoint(string title, Callback callback);
        string getTitle();
        void setTitle(string title);

};