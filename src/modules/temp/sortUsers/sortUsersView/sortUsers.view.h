#pragma once
#include "../../../view.h"
#include "../sortUsersModel/sortUsers.model.h"
#include "../sortUsersController/sortUsers.controller.h"

class SortUsersView: public IView<SortUsersModel, SortUsersController>{
    public:
        SortUsersView(SortUsersModel* SortUsersModel, SortUsersController* SortUsersController)
        : IView(SortUsersModel, SortUsersController){};

        void update() override{};
        void render() override;
};