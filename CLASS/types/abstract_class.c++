#include<iostream>
using namespace std;

class database    //abstract class
{
    public:
        virtual void getname() =0;
};

class manager: public database
{
    public:
        void getname()
        {
            cout<<"this is manager class\n";
        }
};

class accountant: public database
{
    public:
        void getname()
        {
            cout<<"this is accountants class\n";
        }
};

class costomer: public database
{
    public:
        void getname()
        {
            cout<<"this is costomers class\n";
        }
};


int main()
{
    manager M;
    accountant A;
    costomer C;

    M.getname();
    A.getname();
    C.getname();

    return 0;
}