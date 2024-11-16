#include <iostream>
using namespace std;

class rahul;  //declaring second class

class vishal  //first class
{
private:
    int a;

public:
    void ihave()
    {
        a = 15;
    }
    friend int vihaan(vishal p, rahul p2);
};


class rahul //second class
{
private:
    int b;

public:
    int seenu()
    {
        b=25;
    }
    friend int vihaan( vishal p, rahul p2);
};


int vihaan(vishal p, rahul p2)
{
    int c;
    c= p.a + p2.b;

    cout<<"the money I collected: "<<p.a<<"+"<<p2.b<<"="<<c;
}


int main()
{
    vishal A;
    A.ihave();

    rahul B;
    B.seenu();

    vihaan(A,B);


    return 0;
}