#include <iostream>
using namespace std;

class vihaan
{
    int a;        // normal data member
    static int b; // static data member

public:
    vihaan(int x, int y) // constructor with parameter
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout << a << "  " << b << endl;
    }

    static void fun() // static member function
    {
        cout << "hello bro:   " << b; // u can only access static data member, in member function  //a is not accessible
    }
};

int vihaan::b; // static member is always initialized zero(by default)

int main()
{
    vihaan obj(20, 30);
    obj.show();


    // accessing static
    vihaan::fun(); // for calling static function (class_name::static_function_name)

    return 0;
}
