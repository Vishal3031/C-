#include<iostream>
using namespace std;

    int count=0;

class A
{
    public:
    A()   //constructor
    {
    cout<<"object  "<< ++count <<"  created.."<<endl;
    }

    ~A()   //destructor
    {
    cout<<"object  "<< count-- <<"  deallocated/deleted"<<endl;
    }
};

int main()
{
    A obj, obj2; //this object is allocated(inserted) again and again (output is '1' then '2') in memory so that we can use destructor, if ur work is completed then destroctor is used for free up

    return 0;
}