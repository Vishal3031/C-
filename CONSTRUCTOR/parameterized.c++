#include<iostream>
using namespace std;

class A
{
    public:

    A(int a, int b) //parameterized constructor
    {
        cout<<"your number is: "<<a<<"\n"<<b;
    }
};

int main()
{
    A obj(20,30); 

    return 0;
}