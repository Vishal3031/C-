// local class with adding two nmber

#include <iostream>
using namespace std;

int vishal()
{
    class vihaan //  (local class) A class which is declred inside a function is:
    {
        int a, b, c;

    public:
        int bishu()
        {
            a = 12;
            b = 18;
            c = a + b;

            cout << "the sum of " << a << " + " << b << " = " << c << endl;
        }
    };
    vihaan A; // accessing class
    A.bishu();

    return 0;
}

int main()
{
    vishal();

    return 0;
}