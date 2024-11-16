#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int &b=a;  //references by b

    cout<<"using ref.. our nmbr is:  "<<b;

    return 0;
}