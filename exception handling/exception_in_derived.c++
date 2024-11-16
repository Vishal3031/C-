#include<iostream>
using namespace std;

class base
{
    public:
        base()
        {    
            cout<<"hello\n";
        }
};

class derived: public base
{
    public:
        derived()
        {
        }
};


int main()
{
    try
    {
        throw derived();
    }
    catch(derived &derievd)
    {
        cout<< "caught derived....\n";
    }

    catch(base &base)
    {
        cout << "caught base....";
    }
    

    return 0;
}