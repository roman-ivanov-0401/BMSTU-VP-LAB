#pragma once
#include <string>

#include "./menuPoint/menuPoint.h"

class Menu{
    public:
        Menu(string, MenuPoint*, int);
        ~Menu();

        string getTitle();
        int getQuantityOfPoints();
        int getSelectedPointNumber();
        MenuPoint* getMenuPointPtrByIndex(int index);
        MenuPoint* operator[](const int index);

        void setTitle(string newTitle);
        void setSelectedPointNumber(int selectedPointNumber);
        void setQuantityOfPoints(int quantityOfPoints);

        void start();
    private:
        string title;
        int selectedPointNumber;
        int quantityOfPoints;
        MenuPoint* menuPoints;
};