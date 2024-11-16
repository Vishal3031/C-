// union is showing biggest sizes of data

#include<iostream>
using namespace std;
union vish
{
    int marks;
    float avg;
    double salary;
};

int main()
{
    union vish u;  // s' is a variable
    cout<<"union size is:"<<sizeof(u);

    return 0;
}