// W.A.P to find largest number among three numbers 

#include<iostream>
using namespace std;


int main()
{
    int a;
    int b;
    int c;

    cout<<"enter three number to find the largest among number"<<endl;
    cin>>a>>b>>c;

    if(a>b && a>c)
    {
        cout<<"the largest number is: "<<a<<endl;
    }

    else if(b>c)
    {
        cout<<"the largest number is: "<<b<<endl;
    }
    
    else{
        cout<<"the largest number is: "<<c<<endl;
    }

    return 0;
}