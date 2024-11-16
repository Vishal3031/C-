#include<iostream>
using namespace std;

template<class V>

class show
{
    V a,b;     //here, V is a new data type bcz of template and after this we can use any type of value and character..

    public:
    show(V x, V y)
    {
        a=x;
        b=y;
    }

    void sho()
    {
        cout<<"A="<<a<<endl<<"B="<<b<<endl;
    }

};


int main()
{
    show <int> obj(20,30);
    obj.sho();

    return 0;
}