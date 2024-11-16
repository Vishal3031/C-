#include<iostream>
using namespace std;

class bishu
{
    string airpot;  //default private

    public:
        
        int vishal()  //for initializing that value we can a function in public section
        {
        airpot="staying in airpot";
        }

        friend void vihaan(bishu ref);  //using this syntax with reference, now we are friend with class bishu
        
};

void vihaan(bishu ref)
{
    cout<<"traveling and also,......"<<ref.airpot;  //through reference we can print airpot
};

int main()
{
    bishu A;
    A.vishal();   //calling vishal through object
    vihaan(A);  //through this we calling his friend

    return 0;
}