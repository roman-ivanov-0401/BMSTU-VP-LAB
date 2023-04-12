#pragma once
#include <string>
#include <ctime>
#include "../user/user.entity.h"

using namespace std;

class Message{
    public:
        Message(string text, User* sender, Message* prev, Message* next, time_t timeOfSending)
        : text(text), sender(sender), prev(prev), next(next), timeOfSending(timeOfSending)
        {}

        string getText(){
            return this->text;
        }

        User* getSender(){
            return this->sender;
        }

        Message* getPrev(){
            return this->prev;
        }

        Message* getNext(){
            return this->next;
        }

        void setText(string text){
            this->text = text;
        }

        void setSender(User* sender){
            this->sender;
        }

        void setPrev(Message* prev){
            this->prev = prev;
        }

        void setNext(Message* next){
            this->next = next;
        }

    private:
        string text;
        User* sender;
        Message* prev;
        Message* next;
        time_t timeOfSending;
};