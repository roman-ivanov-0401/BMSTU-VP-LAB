#pragma once
typedef void (*Callback)(bool *isMenuActive);
struct MenuPointProps{
    string title;
    Callback callback;
    int order;
};