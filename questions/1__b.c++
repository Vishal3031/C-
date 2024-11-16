//W.A.P to reverse a number

#include<iostream>
using namespace std;


int main()
{
    int n, result=0, remainder;

    cout<<"enter an integer number"<<endl;
    cin>>n;

    while (n!=0)
    {
        remainder=n%10;
        result=result*10+remainder;
        n=n/10;   //n/=10;

    }
    
    cout<<"our result is: "<<result;

    return 0;
}