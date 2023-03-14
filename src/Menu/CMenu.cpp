#include <iostream>
#include <string>
#include <iomanip>

#include "CMenu.h"
#include "../utils/utils.h"

using namespace std;

namespace CM{
    CMenu::CMenu(
        string title,
        CMenuItem* menuItems,
        int quantityOfItems
    ) 
        : 
        title(title), 
        menuItems(menuItems),
        quantityOfPoints(quantityOfItems){};

    CMenu::~CMenu(){
        delete[] menuItems;
    }

    void CMenu::start(){
        do{
        showTitle();
        showItems();
        inputOption();
        if(selectedPointNumber != 0)
            menuItems[selectedPointNumber - 1].pick();
        } while(selectedPointNumber != 0);
    }

    string CMenu::getTitle(){
        return title;
    }

    void CMenu::setTitle(string newTitle){
        title = newTitle;
    }

    void CMenu::showTitle(){
        cout << "Laboratory work #1 | " << title << endl;
    }

    void CMenu::showItems(){
        for(int i = 0; i < quantityOfPoints; i++){
            cout << "[" << setw(3) << i + 1 << "] " 
            << menuItems[i].getTitle() 
            << endl;
        }
        cout << "[" << setw(3) << "0" << "] " 
            << "Exit" 
            << endl;
    }

    void CMenu::inputOption(){
        cout << "Enter option: ";
        inputIntInRange(selectedPointNumber, 0, quantityOfPoints);
    }
}

