// structure can add your all data_type sizes 

#include<iostream>
using namespace std;
struct stu
{
    int marks;
    float avg;
    double salary;
};

int main()
{
    struct stu s;  // s' is a variable
    cout<<"structure size is:"<<sizeof(s);

    return 0;
}