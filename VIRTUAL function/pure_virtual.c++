#include<iostream>
using namespace std;

class A       //base class
{
    public:
        virtual void display() = 0;      //pure virtual function (can not define, this function define on other class not here)(and u can't create a object from this class)
};

class B : public A     //derive class inherit base class
{
    public:
        void display()         //child class function 
        {
            cout<<"\ni am from derived class B"<<endl;
        }
};

class C: public A
{
    public:
        void display()
        {
            cout <<"i am from derived class C"<<endl;
        }
};

int main()
{
    // B obj;
    // C obj2;
    // obj.display();
    // obj2.display();


    A *p;            //base class pointer
    B obj;           //B class object
    C obj2;           //C class object

    p=&obj;            //address of derived class B
    p->display();    //calling display of class B

    p=&obj2;            //address of derived class C
    p->display();    //calling display of class C

    return 0;
}