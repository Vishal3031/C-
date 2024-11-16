// W.A.P to illistratendefault constructor, parameterized constructor. copy constructor (implicit & explicite) and destructor 


// default constructor 
#include<iostream>
using namespace std;

class student
{

    int rno;
    char name[50];
    double fee;

    public:
    student()
    {                                        //(implicit)input
        cout<<"enter the roll no"<<endl;
        cin>>rno;

        cout<<"enter name"<<endl;
        cin>>name;

        cout<<"enter your fee"<<endl;
        cin>>fee;


    }

    void display()
    {                                          //(explicit)
        cout<<endl<<rno<<"\t"<<name<<"\t"<<fee<<endl;
    }
};



int main()
{
    student s;  //auto called in constructor when we create a object of class

    s.display();

    return 0;
}