// W.A.P to print call by reference (swap with the help of pointer)

#include<iostream>
using namespace std;

void hero(int *x,int *y)
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}


int main()
{
    int x=30;
    int y=50;

    cout<<"before swapping X is: "<<x<<endl<<"before swapping Y is: "<<y<<endl<<endl<<endl;

    hero(&x,&y);
    cout<<"after swapping X is: "<<x<<endl<<"after swapping Y is: "<<y;


    return 0;
}