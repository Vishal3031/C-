#include <iostream>
using namespace std;

class vishal
{
    int a, b; // default private

public: //czz of it is default private so that we use "public" specifier for being public

    vishal() // default constructor (followed by class name)
    {
        a = 20;
        b = 30;

        cout << "our number is" << a << "\n"<< b;
    }
};

int main()
{
    //vishal obj=vishal(); //initialized the object
    
    vishal obj; // automatically called czz of constructor

    return 0;
}