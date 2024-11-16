// W.A.P to show the example of function overloading 

#include<iostream>
using namespace std;

class A
{
    int num1, num2, s;

    public:
        void person() 
        {
            cout<<"enter two number"<<endl;
            cin>>num1>>num2;
            s=num1 + num2;

            cout<<"addition is: "<<s<<endl;
        }
        
        void person(int a, int b) //function overloading
        {
            int m;
            m=a*b;
            cout<<"multiplication is: "<<m<<endl;
        }
};


int main()
{
    
    A obj;
    obj.person(20,25); //we know first compile is this object so it is a "compile time" "early binding" "static polymorphism"
    obj.person();
    

    return 0;
}