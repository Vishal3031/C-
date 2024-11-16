// W.A.P to adding,substract,multiple,devide of number by help of multiple inheritance 


#include <iostream>
using namespace std;

int a,b,c;

class A
{

public:
    void input(); //only u can declare this function for/and accessing this, in out of this class
    void add();
};

void A :: input() //for accessing ur previous declaring function use this. (ur previous "datatype class_name ::(scope resolution) previous function name")
{
    
    cout << "enter the numbers: "<<endl;
    cin >> a >> b;
}

void A :: add()
{
    
    c=a+b;
    cout<<"addition "<<c<<endl;
}


class B
{

    public:
        void sub();
};

void B :: sub()
{
    c=a-b;
    cout<<"subtraction "<<c<<endl;
}


class C : public A, public B
{

    public:
        void multi();
        void div();
};

void C :: multi()
{
    c=a*b;
    cout<<"multiplication "<<c<<endl;
}

void C :: div()
{
    c=a/b;
    cout<<"division "<<c<<endl;
}



int main()
{

    C obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.multi();
    obj.div();

    return 0;
}