#pragma once
#include <string>
#include <ctime>

using namespace std;

class Reminder{
    public:
        Reminder(string message, time_t date)
        : message(message), date(date)
        {}
    private:
        string message;
        time_t date;
};