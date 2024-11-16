// W.A.P to check whether a number is a palindrome or not 


#include<iostream>
using namespace std;


int main()
{
    int a,b,c,d=0;

    cout<<"enter any positive number"<<endl;
    cin>>a;

    b=a;

    do
    {
        c=a%10;
        d=d*10+c;
        a/=10; //a=a/10;

    } while (a!=0);
        cout<<"ur reverse number is: "<<d<<endl;

if (b==d)
{
    cout<<"the number is a palindrome"<<endl;
}
else{
    cout<<"the number is not palidrome"<<endl;
}


    return 0;
}