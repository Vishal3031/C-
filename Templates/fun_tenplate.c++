#include<iostream>
using namespace std;

template <class T>
void show(T a, T b)
{
    cout<<"A="<<a<<endl<<"B="<<b<<endl;
}


int main()
{
    int a=10, b=20;
    char m='a', n='c';
    float x=1.34, y=2.4;

    show(a,b);
    show(m,n);
    show(x,y);



    return 0;
}