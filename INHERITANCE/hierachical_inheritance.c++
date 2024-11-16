#include<iostream>
using namespace std;

class animal //base class
{
    public:
        void eat()
        {
            cout<<"animal eating,..."<<endl;
        }
};

//In cat classs defination is known as 'behaviour'
class cat : public animal //derived class inherit with "base" class
{
    public:
        void voice()
        {
            cout<<"meow meow "<<endl;
        }
};

class dog : public animal //derived2 class inherit with "base" class
{
    public:
        void bark()
        {
            cout<<"woof woof "<<endl;
        }
};


int main()
{
    cat obj;
    dog obj2;

    obj.eat();
    obj2.eat();

    return 0;
}