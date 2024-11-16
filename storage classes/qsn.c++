#include<iostream>
using namespace std;

int c=50;

void fun()  //defination
{
    int a=10;
    static int b=20;

    cout<<a<<"\t"<<b<<endl;

    ++a, ++b;
}

int main()
{
    cout<<c<<endl;

    fun(); //calling
    fun(); // if again u calling static can be hold ur value

    return 0;
}