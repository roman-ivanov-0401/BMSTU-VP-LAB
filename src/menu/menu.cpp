#include "./menu.h"
#include "../render/render.h"

// Constructor
Menu::Menu(string title, MenuPoint *menuPoints, int quantityOfPoints)
: title(title), menuPoints(menuPoints), quantityOfPoints(quantityOfPoints){}

// Destructor
Menu::~Menu(){
    delete[] this->menuPoints;
}

// Getters
string Menu::getTitle(){
    return this->title;
}

MenuPoint* Menu::operator[](const int index){
    return this->menuPoints + index;
}

int Menu::getSelectedPointNumber(){
    return this->selectedPointNumber;
}

int Menu::getQuantityOfPoints(){
    return this->quantityOfPoints;
}

MenuPoint* Menu::getMenuPointPtrByIndex(int index){
    return this->menuPoints + index;
}

//Setters
void Menu::setTitle(string title){
    this->title = title;
}

void Menu::setSelectedPointNumber(int selectedPointNumber){
    this->selectedPointNumber = selectedPointNumber;
}

void Menu::setQuantityOfPoints(int quantityOfPoints){
    this->quantityOfPoints = quantityOfPoints;
}

//Other



