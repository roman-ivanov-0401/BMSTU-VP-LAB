#pragma once
#include <set>

#include "../user/user.entity.h"
#include "../message/message.entity.h"

using namespace std;

class Dialog{
    public:
        Dialog(set<User*>& senders, Message* firstMessage, Message* lastMessage)
        : senders(senders), firstMessage(firstMessage), lastMessage(lastMessage), currnetMessage(firstMessage)
        {
            this->firstMessage->setPrev(nullptr);
            this->lastMessage->setNext(nullptr);
        };

        ~Dialog(){
            while(this->currnetMessage->getNext() != nullptr){
                this->currnetMessage = this->firstMessage;
                this->firstMessage = this->firstMessage->getNext();
                delete this->currnetMessage;
            }
            delete this->firstMessage;
            delete this->lastMessage;
        }

        Message* getFirstMessage(){
            return this->firstMessage;
        }

        Message* getLastMessage(){
            return this->lastMessage;
        }

        set<User*>* getSenders(){
            return &this->senders;
        }

        void setFirstMessage(Message* message){
            if(this->senders.count(message->getSender()) > 0)
                this->firstMessage = message;
        }

        void setLastMessage(Message* message){
            if(this->senders.count(message->getSender()) > 0)
                this->lastMessage = message;
        }

        void setSenders(set<User*>& senders){
            this->senders = senders;
        }

    private:
        set<User*> senders;
        Message* firstMessage;
        Message* lastMessage;
        Message* currnetMessage;
};