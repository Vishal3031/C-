#include<iostream>
using namespace std;
int main()
{
    cout<<"Excution starting...."<<endl;
    int a,b,c;
    cout<<"enter two number;"<<endl;
    cin>>a>>b; //if we dividing 0/10 then it can't show result known as exception (so that we using exception syntax)

    try
    {
        if(b==0)
        {
        throw b; //it can throw the int type variable then we can catch this integer variable using "catch"
        }
        
        c=a/b;
        cout<<"result:"<<c;
    }

    catch(int b)
    {
        cout<<"can't divide by: "<<b;
    }
    
    

    return 0;

}