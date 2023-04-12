#pragma once
#include "../../../view.h"
#include "../addUserModel/addUser.model.h"
#include "../addUserController/addUser.controller.h"

class AddUserView: public IView<AddUserModel, AddUserController>{
    public:
        AddUserView(AddUserModel* addUserModel, AddUserController* addUserController)
        : IView(addUserModel, addUserController){};

        void update() override{};
        void render() override;
};