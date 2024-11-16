#include<iostream>
using namespace std;

class printtt
{
            //class is automatically "private" so that we can use public
    public:
    void vishal() //member function
    {
        cout<<"hello vishal";
    }

};

int main()
{

    printtt obj; //we create a object of class "obj" for calling 

    obj.vishal();
    

    return 0;
}