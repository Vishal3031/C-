// W.A.P to find a factorial of number


#include<iostream>
using namespace std;


int main()
{
int i,n;
int fact=1;

cout<<"enter a integer to find: "<<endl;
cin>>n;

for(i=1; i<=n; ++i)
{
    fact*=i;  //fact=fact*i;
}
    
    cout<<"number of "<<n<<" and the factorial is: "<<fact;

    return 0;
}