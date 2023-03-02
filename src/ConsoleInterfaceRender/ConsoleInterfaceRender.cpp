#include <iostream>
#include <string>
#include <cmath>

#include "ConsoleInterfaceRender.h"
#include "../consts.h"
#include "../Menu/CMenu.h"

using namespace std;
using namespace CM;

class ConsoleInterfaceRender{
    public:
        void renderAppHeader(string title){
            renderDivider();
            renderTitle(title);
            renderDivider();
        }

        void renderMenu(CMenu menu){
            renderDivider();
            renderTitle(menu.getTitle());
        }
    private:
        void renderDivider(){
            for(int i = 0; i < APP_WIDTH; i++){
                cout << "-";
            }
            cout << endl;
        }

        void renderTitle(string title){
            for(int i = 0; i < ceil(title.size() / 2.0); i++){
                cout << " ";
            }
            cout << title;
            for(int i = 0; i < floor(title.size() / 2.0); i++){
                cout << " ";
            }
        }
};