// W.A.P to show the BANK example of data abstraction. 

#include<iostream>
using namespace std;

class MyBANK
{

private:
    int ATMpin, Balance;

public:
    string Bnkname , IFSC;
    int AcountNMBR;

    void input() 
    {
        ATMpin=2134;
        Balance=314134;
        Bnkname="UNION BANK of INDIA";
        IFSC="paytm0762137";
        AcountNMBR=96489273;
    }
    
    void output()
    {
        cout<<"my bank details..."<<endl;
        cout<<ATMpin<<endl;
        cout<<Balance<<endl;
        cout<<Bnkname<<endl;
        cout<<IFSC<<endl;
        cout<<AcountNMBR<<endl<<endl<<endl;

    }
};


int main()
{
    MyBANK A;
    A.input();

    A.output();

    //ABSTRACTION 
    cout<<"seenu is trying to access your account...."<<endl;
    // cout<<A.ATMpin<<endl;    //not access bcz it is private
    // cout<<A.Balance<<endl;   //not access bcz it is private
    cout<<A.Bnkname<<endl;
    cout<<A.IFSC<<endl;
    cout<<A.AcountNMBR<<endl;


    return 0;
}
