// W.A.P using encapsulation,..!

#include<iostream>
using namespace std;

class thief
{
    private:   //imp doc must be a private
        string name, address;
        int mob;

    public:    //other should be a public
        
        void input()
        {
            name= "rahul kumar";
            address= "rajiv colony, gurgaon, india";
            mob= 90654123;
        }

        void output()
        {
            cout<<"name: "<<name<<endl;
            cout<<"address: "<<address<<endl;
            cout<<"mob: "<<mob<<endl;
        }
};


// encapsulation

class police:public thief  //inherited (public function is captured by polic)(private is can't captured bcz it is private)
{
    
};

int main()
{
    police p;
    p.input();
    p.output();

    // cout<<p.name<<"for accessing"<<endl: 

    // thief obj;
    // obj.input();
    // obj.output();

    return 0;
}