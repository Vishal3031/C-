//W.A.P to find a vowel constant to given char

#include<iostream>
using namespace std;


int main()
{
    char vowel;

    cout<<"enter any char value"<<endl;
    cin>>vowel;

    if (vowel=='a' || vowel=='e' || vowel=='i' ||vowel=='o' ||vowel=='u'|| vowel=='A' || vowel=='E' ||vowel=='I' ||vowel=='O' ||vowel=='U')
    {
        cout<<"you enter vowel"<<endl;
    }
    else
    {
        cout<<"this is constant";
    }
    

    return 0;
}