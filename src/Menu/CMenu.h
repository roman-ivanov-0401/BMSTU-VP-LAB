#include <string>
#include <vector>

#include "../MenuItem/CMenuItem.h"

using namespace std;

namespace CM{
    class CMenu{
        public:
            CMenu(string, CMenuItem*, int);
            ~CMenu();

            string getTitle();
            void setTitle(string newTitle);
            void start();
        private:
            string title;
            int selectedPointNumber;
            int quantityOfPoints;
            CMenuItem* menuItems;
            void showTitle();
            void showItems();
            void inputOption();
    };
}