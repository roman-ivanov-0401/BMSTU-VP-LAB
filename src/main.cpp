#include <iostream>

#include "modules/menu/menuModule/menu.module.h"
#include "modules/menu/menuConfig/menu.config.h"
#include "storage/storage.h"
#include "helpers/userFiller/userFiller.h"

int main(){
    Storage* store = Storage::getStorage();
    UserFiller::fillSrorage();


    while(!store->getToCloseApp()){
        MenuModule menu(getMenuProps());
        
        menu.run(); 
    }
    return 0;
}
