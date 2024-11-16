#include <iostream>
#include <cmath>
using namespace std;

class vihaan // global class
{
private:
    double a, b, c;

public:
    int bishu()
    {
        a = 200;
        b = 10;
        c = a / b;

        cout << a << " devided by " << b << " is = " << c;
    }
};

int main()
{

    vihaan obj;
    obj.bishu();

    return 0;
}