#include<iostream>
using namespace std;

class demo
{
    static int counter; //static variable

    public:
        void increase_count()
        {
            counter++;
        }

        static void show_counter()     //static function (it can only taken "static variable")
        {
            cout<<"count=" <<counter<<endl;
        }
};

int demo::counter;    //u have to tell compiler that we have static variable in class

int main()
{
    demo obj;                  //obj is a object class of demo
    obj.increase_count();      
    obj.increase_count();      //we have used obj to call increase_count twice

    demo::show_counter();      //we have called static function by using class name

    return 0;
}