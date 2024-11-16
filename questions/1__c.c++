// C++ program to swap a number

#include<iostream>
using namespace std;

int main()
{
int a=12;
int b=15;

cout<<"before swap: "<<endl;
cout<<"a is: "<<a<<endl<<"b is: "<<b<<endl;

int temp=a;
a=b;
b=temp;

cout<<"after swap: "<<endl;
cout<<"a is "<<a<<endl<<"b is: "<<b<<endl;

    return 0;
}