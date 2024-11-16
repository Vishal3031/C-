#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter your age:\n" ; //u can use <<endl for new line
    cin>>age;

    if (age>=18) //here, we also can use curly braces or can't use curly_braces
    {
        goto vote;
    }
    else
        goto notvote;
        // goto end; 

    vote:
        cout<<"you are eligible for vote";
        return 0;

    notvote:
        cout<<"sorry, you are not eligible for vote";
    
    // end: 

    return 0;
}