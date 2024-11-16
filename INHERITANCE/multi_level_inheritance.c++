// W.A.P to demonstrate multi-level inheritance  

#include<iostream>
using namespace std;

class GrandFather //BASE CLASS
{
    protected:   //it is use bcz any other class would be inherit of this class
        int money;
        string House;
        string business;

    public:
        void input()
        {
            money=500000;
            House="rajendra house";
            business="reliance Pvt.Ltd";

            cout<<endl<<endl;
            cout<<"my house name is: "<<House<<endl;
            cout<<"my company name is: "<<business<<endl;
            cout<<"my Bank amount is: "<<money<<endl<<endl;
        }

};

class Father : public GrandFather  //DERIVED CLASS
{
    protected:
            int money2;
            string house2;

    public:
        void input2()
        {
            money2=300000;
            house2="devi house";

            cout<<"my house name is: "<<house2<<endl;
            cout<<"my Bank amount is: "<<money2<<endl<<endl;
        }
};

class son: public Father  //DERIVED2 CLASS
{
    
    public:
        void input3()
        {
            string b="BMW";
            cout<<"i have a car: "<<b<<endl<<endl;
        }

};


int main()
{
    GrandFather A;
    A.input();

    Father B;
    B.input2();

    son C;
    C.input3();

    C.input();  //for accessing son to grandfather class

    B.input();  //for accessing father to grandfather class

    C.input2();  //for accessing son to father class


    return 0;
}