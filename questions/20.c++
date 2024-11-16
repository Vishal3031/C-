//W.A.P in order of constructor and destructor in inheritance...

#include<iostream>
using namespace std;

class base
{
    public:
        base() //condtructor
        {
            cout<<"inside the base constructor "<<endl;
        }

        ~base()  //destructor
        {
            cout<<"inside the base destructor "<<endl;
        }
};

class derived: public base
{
    public:
        derived() //condtructor
        {
            cout<<"inside the derived constructor "<<endl;
        }

        ~derived()  //destructor
        {
            cout<<"inside the derived destructor "<<endl;
        }
};


int main()
{
    derived x;

    return 0;
}