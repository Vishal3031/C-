#include<iostream>
using namespace std;

class A
{
    public:

    A(double a) //parameterized constructor
    {
        cout<<"your number is: "<<a;
    }
};

int main()
{
    A obj=A(23.50); 

    return 0;
}