#include<iostream>
//it define scope and lifetime of variable and function

using namespace std;

int a; //extern (global variable) (return_0)

int main()
{
int b; //auto variable (return_garbage)
static int c; //static variable (return_0)
register int d; // register variable (return_garbage)

cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;

return 0;

}