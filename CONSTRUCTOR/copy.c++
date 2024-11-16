#include<iostream>
using namespace std;

class vihaan
{
    int x,y,z,v; //class variable for using anywhere in class

public:
    vihaan(int a, int b) //parameterized constructor
    {
        x=a;
        y=b;
        cout<<"hello vishal, your number is: "<<x<<"\t"<<y<<endl;
    }


    vihaan(vihaan &ref) //copy costructor //using "&ref (&refrence)" we can connect ur class constructor....(u can also change &(ref)name into other )
    {
        z=ref.x; //refrence call X and store z
        v=ref.y; //refrence call Y and store a
        cout<<"hello vishal, your copy number is: "<<z<<"\t"<<v<<endl;
    }

};

int main()
{
    vihaan obj(20,40);
    vihaan obj2=obj;

    return 0;
}