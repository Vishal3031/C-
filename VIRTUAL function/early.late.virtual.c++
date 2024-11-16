#include<iostream>
using namespace std;

class Base
{
    public:
        void fun1()
        {
            cout<<"base-1\n";
        }

        virtual void fun2()
        {
            cout<<"base-2\n";
        }

        virtual void fun3()
        {
            cout<<"base-3\n";
        }

        virtual void fun4()
        {
            cout<<"base-4\n";
        }
};

class Derived : public Base
{
    public:
        void fun1()
        {
            cout<<"derived-1\n";
        }

        void fun2()
        {
            cout<<"derived-2\n";
            
        }

        void fun4(int x)
        {
            cout<<"derived-4\n";
        }
};


int main()
{
    Base* p;
    Derived obj;
    p=&obj;

    p->fun1();   //early binding bcz 'fun1' is non-virtual
    
    p->fun2();   //late binding

    p->fun3();   //late binding

    p->fun4();   //late binding
    

    


    return 0;
}