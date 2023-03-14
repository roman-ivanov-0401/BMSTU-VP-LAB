#include <iostream>
#include <cmath>
#include <string>

#include "menuFuncs.h"
#include "utils/utils.h"

using namespace std;

void calculateSquareRootCb(){
    double numberForSqrt{};
    cout << "Find the root of a number" << endl;
    cout << "Number: ";
    inputRealNumber(numberForSqrt);
    cout << "Square root: " << sqrt(numberForSqrt);
    system("pause");
    system("clear");
}

void displayPseudographicsCb(){
    cout << "__________$$$" << endl;
    cout << "__________$$$$" << endl;
    cout << "__________$$$$" << endl;
    cout << "_________$$$$$$" << endl;
    cout << "_________$$$$$$" << endl;
    cout << "________$$$$$$$$" << endl;
    cout << "________$$$_$$$$" << endl;
    cout << "________$$$$_$$$" << endl;
    cout << "_______$$$$$_$$$$___•" << endl;
    cout << "_______$$$$$$_$$$___I" << endl;
    cout << "______$$$$$$$_$$$___I" << endl;
    cout << "______$$$$$$$$_$$___I" << endl;
    cout << "______$$$$$_$$_$$__I____•" << endl;
    cout << "_______$$$$$_$$$$__I___I" << endl;
    cout << "________$$$$$_$$$_#" << endl;
    cout << "_________$$$$$__##__$$$$$$$" << endl;
    cout << "_______$$$$$$$_##j$$$$$$$$$$$$$$" << endl;
    cout << "_____$$$$$$$_##_$r$$__$$$$$$$$$$$$$$" << endl;
    cout << "____$$$$$$$_###$$_$$$__$$$$$$$$$$$$$$$$" << endl;
    cout << "____$$$$$$_###_$$$_$$$$__$$$$$$$$$$$$$$$$" << endl;
    cout << "____$$$$$_###_$$$$$$_$$$$$$_$$$$$$$$$$$$$$$" << endl;
    cout << "___$$$$$__##_$$$$$$$$$$$$$$$$$$$$$___$$$$$$$" << endl;
    cout << "__$$$$$__#__$$$$$$$$$$$$$$" << endl;
    cout << "__$$$_____$$$$_$$$$$$$" << endl;
    cout << "__$_______$$$$__$$$$" << endl;
    cout << "__$______$$$$$$$" << endl;
    cout << "_________$$$$$$$" << endl;
    cout << "________$$$$$$$" << endl;
    cout << "________$$$$$" << endl;
    cout << "_______$$$$$" << endl;
    cout << "_______$$$" << endl;
}

void greetUserCb(){
    cout << "Enter your name: " << endl;
    string userName{};
    cin >> userName;
    cout << "Hello, " << userName << "!";
}