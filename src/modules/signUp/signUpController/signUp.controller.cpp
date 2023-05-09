#include "./signUp.controller.h"
#include "../../../storage/storage.h"

void SignUpController::registerUser(User *regUser) {
    Storage* store = Storage::getStorage();
    store->getAccounts()->push_back(regUser);
    store->setAuthorizedAccount(regUser);
}