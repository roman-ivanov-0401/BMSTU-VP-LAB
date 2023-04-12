#pragma once
typedef void (*Callback)();
struct MenuPointProps{
    string title;
    Callback callback;
    int order;
};