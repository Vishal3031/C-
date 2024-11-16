//W.A.P to demonstrate hybrid inheritance...

#include<iostream>
using namespace std;

class A
{
    int n;

    public:
        void input()
        {
            n=400;

                cout<<"your entering number is: "<<n <<endl;

        }
};

class B: virtual public A  //now we write virtual to ignoring this class for accessing 'D' to 'A' class directly 
{

};

class C: virtual public A //now we write virtual to ignoring this class for accessing 'D' to 'A' class directly 
{

};

class D: public B, public C
{

};


int main()
{
    A obj;
    B obj2;
    C obj3;
    D obj4;

    obj.input(); //called by A class
    obj2.input(); //called by B to A class member fn
    obj3.input(); //called by C to A class member fn

    obj4.input(); //hybrid  (czz it is conbination of one and more inheritance)

    return 0;
}