#pragma once
#include <string>
#include <vector>

#include "../menuPoint/menuPointModule/menuPoint.module.h"
#include "../menuPoint/menuPoint.types.h"

typedef vector<MenuPointProps> MenuPoints;

struct MenuProps{
    MenuPoints* menuPoints;
    string title;
};