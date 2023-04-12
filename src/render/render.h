#include "../menu/menu.h"
#include "../menu/menuPoint/menuPoint.h"

class Render{
    private:
        static void renderMenuPointInMenu(MenuPoint& menuPoint, int numberOfOption); 
    public:
        static void renderMenu(Menu &menu);
};