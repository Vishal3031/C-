#include<iostream>
using namespace std;

class vishal
{
private:
int a;

protected:
int b;

public:
int c;
};

int main()
{
    
    vishal obj;
    //obj.a=20; //not allowed
    //obj.b=30; //not allowed

    obj.c=40; // allowed

    cout<<"your value is: "<< obj.c;

    return 0;
}
