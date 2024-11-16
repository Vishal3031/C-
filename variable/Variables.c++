//VARIABLES

#include<iostream>
int a=10; //global variable
static int d=40; //static global variable
int main()
{
    int b=20; //local variable
    static int c=30; //static variable (when we using increament or decreament static var is hold that value )

    std::cout<<a<<"\n"; //end1 is end with new line
    std::cout<<b<<"\n";
    exit(0); //it means exit ur programm

    std::cout<<c<<"\n";
    std::cout<<d;
    return 0;
}