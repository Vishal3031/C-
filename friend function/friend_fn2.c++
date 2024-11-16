#include<iostream>
using namespace std;

class vishal
{
    string tv;

    public:

    int vihaan()
    {   
    tv= "IPL FINAL MATCH";
    // cout<<tv;
    }

    friend int bishu(vishal ref);
};

int bishu(vishal ref)
{
    cout<<"watching,...."<<ref.tv;
};

int main()
{
    vishal A;
    A.vihaan();
    bishu(A); 

    return 0;
}