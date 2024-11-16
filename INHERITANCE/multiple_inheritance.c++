//W.A.P to demonstrate multiple inheritance...

#include<iostream>
using namespace std;

class base
{
    protected:
        string name;

    public:
        void input()
        {
            name ="mr vihaan";

            cout<<"my name is "<<name<<endl;
        }

};

class base2
{
    protected:
        int money;

    public:
        void input2()
        {
            money=200000;

            cout<<"i have "<<money<<" money in my acount"<<endl;
        }

};

class derived: public base, public  base2
{
    string description;

    public:
        void input3()
        {
            description="hello my name is vishal and i accessing these two base: ";
            cout<<description<<endl<<endl<<endl;
        }

};


int main()
{
    base A;
    A.input();

    base2 B;
    B.input2();

    derived C;
    C.input3();

    C.input(); //multiple inheritance with one derived class and calling two base class
    C.input2();

    return 0;
}