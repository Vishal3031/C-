//enum is given automatic nmbr increasing nmbr (index number) 

#include<iostream>
using namespace std;

int main()
{
    enum gender
    {
        male, female, others
    };

    cout<<male<<endl;

    gender var=others;
    cout<<var;

    return 0;
}