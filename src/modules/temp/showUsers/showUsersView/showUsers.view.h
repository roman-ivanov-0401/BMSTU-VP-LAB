#pragma once
#include "../../../view.h"
#include "../showUsersModel/showUsers.model.h"
#include "../showUsersController/showUsers.controller.h"

class ShowUsersView: public IView<ShowUsersModel, ShowUsersController>{
    public:
        ShowUsersView(ShowUsersModel* ShowUsersModel, ShowUsersController* ShowUsersController)
        : IView(ShowUsersModel, ShowUsersController){};

        void update() override{};
        void render() override;
};