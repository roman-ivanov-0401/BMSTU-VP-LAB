cmake_minimum_required(VERSION 3.20)

project(Lab)

add_executable(Lab
  src/main.cpp  
  src/menu/menu.h
  src/menu/menu.cpp
  src/menu/menuPoint/menuPoint.h
  src/menu/menuPoint/menuPoint.cpp
  src/render/render.h
  src/render/render.cpp

  src/utils/inheritance.h
  src/utils/input/input.utils.h
  src/utils/input/input.utils.cpp

  src/helpers/userFiller/userFiller.h
  src/helpers/userFiller/userFiller.cpp

  src/storage/storage.h
  src/storage/storage.cpp

  src/entities/account/account.entity.h
  src/entities/account/account.entity.cpp
  src/entities/administrator/administrator.entity.h
  src/entities/administrator/administrator.entity.h
  src/entities/dialog/dialog.entity.h
  src/entities/dialog/dialog.entity.cpp
  src/entities/interest/interest.entity.h
  src/entities/interest/interest.entity.cpp
  src/entities/message/message.entity.h
  src/entities/message/message.entity.cpp
  src/entities/moderator/moderator.entity.h
  src/entities/moderator/moderator.entity.cpp
  src/entities/reminder/reminder.entity.h
  src/entities/reminder/reminder.entity.cpp
  src/entities/topic/topic.entity.h
  src/entities/topic/topic.entity.cpp
  src/entities/user/user.entity.h
  src/entities/user/user.entity.cpp

  src/modules/observe.h
  src/modules/obsevre.cpp
  src/modules/model.h
  src/modules/controller.h
  src/modules/view.h
  src/modules/module.h

  src/modules/menu/menuModel/menu.model.h
  src/modules/menu/menuModel/menu.model.cpp
  src/modules/menu/menuController/menu.controller.h
  src/modules/menu/menuController/menu.controller.cpp
  src/modules/menu/menuView/menu.view.h
  src/modules/menu/menuView/menu.view.cpp
  src/modules/menu/menuModule/menu.module.h
  src/modules/menu/menuModule/menu.module.cpp
  src/modules/menu/menuConfig/menu.config.h
  src/modules/menu/menuConfig/menu.config.cpp
  src/modules/menu/menu.types.h

  src/modules/menuPoint/menuPoint.types.h
  src/modules/menuPoint/menuPointModel/menuPoint.model.h
  src/modules/menuPoint/menuPointModel/menuPoint.model.cpp
  src/modules/menuPoint/menuPointController/menuPoint.controller.h
  src/modules/menuPoint/menuPointController/menuPoint.controller.cpp
  src/modules/menuPoint/menuPointView/menuPoint.view.h
  src/modules/menuPoint/menuPointView/menuPoint.view.cpp
  src/modules/menuPoint/menuPointModule/menuPoint.module.h
  src/modules/menuPoint/menuPointModule/menuPoint.module.cpp

  src/modules/signIn/signInModel/signIn.model.h
  src/modules/signIn/signInModel/signIn.model.cpp
  src/modules/signIn/signInController/signIn.controller.h
  src/modules/signIn/signInController/signIn.controller.cpp
  src/modules/signIn/signInView/signIn.view.h
  src/modules/signIn/signInView/signIn.view.cpp
  src/modules/signIn/signInModule/signIn.module.h
  src/modules/signIn/signInModule/signIn.module.cpp

  # TEMP
  src/modules/temp/addUser/addUserModel/addUser.model.h
  src/modules/temp/addUser/addUserModel/addUser.model.cpp
  src/modules/temp/addUser/addUserController/addUser.controller.h
  src/modules/temp/addUser/addUserController/addUser.controller.cpp
  src/modules/temp/addUser/addUserView/addUser.view.h
  src/modules/temp/addUser/addUserView/addUser.view.cpp
  src/modules/temp/addUser/addUserModule/addUser.module.h
  src/modules/temp/addUser/addUserModule/addUser.module.cpp

  src/modules/temp/showUsers/showUsersModel/showUsers.model.h
  src/modules/temp/showUsers/showUsersModel/showUsers.model.cpp
  src/modules/temp/showUsers/showUsersController/showUsers.controller.h
  src/modules/temp/showUsers/showUsersController/showUsers.controller.cpp
  src/modules/temp/showUsers/showUsersView/showUsers.view.h
  src/modules/temp/showUsers/showUsersView/showUsers.view.cpp
  src/modules/temp/showUsers/showUsersModule/showUsers.module.h
  src/modules/temp/showUsers/showUsersModule/showUsers.module.cpp

  src/modules/temp/sortUsers/sortUsersModel/sortUsers.model.h
  src/modules/temp/sortUsers/sortUsersModel/sortUsers.model.cpp
  src/modules/temp/sortUsers/sortUsersController/sortUsers.controller.h
  src/modules/temp/sortUsers/sortUsersController/sortUsers.controller.cpp
  src/modules/temp/sortUsers/sortUsersView/sortUsers.view.h
  src/modules/temp/sortUsers/sortUsersView/sortUsers.view.cpp
  src/modules/temp/sortUsers/sortUsersModule/sortUsers.module.h
  src/modules/temp/sortUsers/sortUsersModule/sortUsers.module.cpp
        src/containers/MyVector.h)