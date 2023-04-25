#ifndef LAB_MYVECTOR_H
#define LAB_MYVECTOR_H
#include <iostream>
#include <cmath>

using namespace std;
namespace MyContainer{
    template<typename T>
    class MyVector{
    private:
        T* begin = nullptr;
        int length = 0;
        int capacity = 0;
        typedef bool (*SortPattern)(T&, T&);
        typedef bool (*FilterPattern)(T&);
        void expandVector(){
            T* newBegin = new T[this->capacity * 2];
            for(int i = 0; i < this->length; i++)
                newBegin[i] = this->begin[i];
            delete[] this->begin;
            this->begin = newBegin;
        };
        void expandVector(int newLength){
            T* newBegin = new T[newLength * 2];
            for(int i = 0; i < this->length; i++)
                newBegin[i] = this->begin[i];
            delete[] this->begin;
            this->begin = newBegin;
        };
    public:
        // Constructors
        MyVector()
                : begin(new T), length(0), capacity(1)
        {}

        MyVector(int len)
                : begin(new T[len]), length(0), capacity(len)
        {}

        MyVector(const MyVector &vec){
            this->length = vec.length;
            this->capacity = vec.capacity;
            this->begin = new T[this->capacity];
            for(int i = 0; i < this->length; i++)
                this->begin[i] = vec.begin[i];
        }

        // Destructor
        ~MyVector(){
            delete[] begin;
        }

        // Operators
        T operator[](int index){
            if(index >= 0 && index < this->length) return this->begin[index];
            throw "Out of the range";
        }

        // Getters
        T* getBegin() { return this->begin; }
        T* getEnd() { return this->begin + length; }

        // Methods
        void push(T newElement){
            if(this->length == this->capacity) this->expandVector();
            this->begin[this->length] = newElement;
            this->length++;
        };
        void insert(T newElement, int index){
            if(index < 0 || index >= this->length) throw "Out of the range";
            if(this->length == this->capacity) this->expandVector();
            for(int i = index; i < this->length; i++)
                this->begin[i + 1] = begin[i];
            this->begin[index] = newElement;
            this->length++;
        };
        void emplace(int index){
            if(index < 0 || index >= this->length) throw "Out of the range";
            for(int i = index + 1; i < this->length; i++)
                this->begin[i - 1] = this->begin[i];
            delete (this->begin + this->length - 1);
            this->length--;
        };
        void clear(){
            delete[] this->begin;
            this->begin = new T;
            this->length = 0;
            this->capacity = 1;
        };
        void resize(int newLength){
            if(newLength > this->capacity) this->expandVector(std::log2(newLength));
            this->length = newLength;
        };
        void pop(){
            delete (this->begin + this->length - 1);
            this->length--;
        };
        void sort(SortPattern pattern){
            for(int i = 0; i < this->length; i++)
                for(int j = 0; j < this->length - 1; j++)
                    if(pattern(this->begin[j], this->begin[j + 1]))
                        swap(this->begin[j], this->begin[j + 1]);
        };
        MyVector<T> filter(FilterPattern pattern){
            MyVector<T> temp;
            for(int i = 0; i < this->length; i++)
                if(pattern(this->begin[i])) temp.push(this->begin[i]);
            return temp;
        };

        int size(){
            return this->length;
        }

        //Iterator
        class Iterator{
            friend class MyVector<T>;
        private:
            T* current;
        public:
            explicit Iterator(T* curr)
                    : current(curr)
            {}

            T operator*(){ return *this->current; }
            void operator++(){ this->current++; }
            void operator++(int inc){ this->current++; }
            void operator--(){ this->current--; }
            void operator--(int dec){ this->current--; }
            void operator+=(int inc){ this->current += inc; }
            void operator-=(int dec){ this->current -= dec; }
            MyVector::Iterator operator+(int inc){ return MyVector::Iterator(this->current + inc); }
            MyVector::Iterator operator-(int dec){ return MyVector::Iterator(this->current - dec); }
            bool operator==(const MyVector::Iterator &it){ return it.current == this->current; }
            bool operator!=(const MyVector::Iterator &it){ return it.current != this->current; }

        };
    };
}
#endif //LAB_MYVECTOR_H
