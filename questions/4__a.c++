// W.A.P illustating class declaration, definition, and accessing class memebers (variable and function)


#include<iostream>
using namespace std;

class student{

            //access specifier
    public:

            //data members
    string name;

            //member functions()
    void printname()
    {
        cout<<"my name is "<<name;
    }
};


int main()
{
            // declare an object of class student 
    student obj1;

            //accessing data member(variable)
    obj1.name="vishal";

            //accessing member function
    obj1.printname();

    return 0;
}