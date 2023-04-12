#pragma once
#include <vector>

using namespace std;

class Observer{
    public:
        virtual void update() = 0;
};

class Observable{
    public:
        void addObserver(Observer*);
        void notifyUpdate();
    private:
        vector<Observer*> _observers;
};