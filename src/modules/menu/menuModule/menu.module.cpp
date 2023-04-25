#include "menu.module.h"
#include "../../../storage/storage.h"

void MenuModule::run(){
    Storage *store = Storage::getStorage();
    store->setIsMenuActive(true);
    this->view->render();
}
