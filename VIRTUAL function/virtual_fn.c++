// W.A.P to demonstrate virtual function...  (function overriding)

#include<iostream>
using namespace std;

class A
{
    public:
        virtual void show()   //base class
        {
            cout<<"base class is invoked"<<endl;
        }
};

class B: public A
{
    public:
        void show()
        {
            cout<<"derived class invoked"<<endl;
        }
};


int main()
{
    A *obj;  //pointer of base class
    B obj2;  //object of derived class
    obj=&obj2;  
    obj->show();   //late binding/overriding occurs

    return 0;
}