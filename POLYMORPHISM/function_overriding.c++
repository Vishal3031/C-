//W.A.P to show the example of function overriding 

#include<iostream>
using namespace std;
class A
{
    public:
        virtual void person()  //if i write "virtual" void person" then, we can access easily class B, bcz virtual is skip this function 
        {
            cout<<"GOOD MORNING...."<<endl;
        }
};

class B : public A
{
    public:
        void person()  //overriding function (czz class A function is same)
        {
            cout<<"GOOD NIGHT...."<<endl;
        }
};

int main()
{

/*  B obj;                   //1st way to call using scope resolution(::)
    obj.person(); 
    obj.A::person();                                 */

    A *p;                    //2nd way to call using pointer(*)
    B obj;
    p=&obj;
    p->person();     //(->(hyphen greater))  


    // A*p;                      //3rd way to call using virtual (virtual is skipping his fuction ) 
    // B obj:
    // p=&B;                      //it accessing of 'A' class but 'A' class is a virtual class so that virtual is skipping our function and going to the next function (and pointer is pointing B, so next B class is accessed)                 
    // p->person();

    return 0;
}