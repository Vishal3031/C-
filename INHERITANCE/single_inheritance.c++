//W.A.P to single or simple inheritance..

#include<iostream>
using namespace std;

class dad    //let, BASE class
{
    protected:  //it is use bcz our derived class is access this through inheritance (private class can't accessing our member to others) (and public is accessing our member to everyone)
        int amount;

    public:
        void input()
        {
            amount=5000000;
        }

};

class son : public dad  //DERIVED class" is inherite base class
{
    int money=3564;
    public:
    void show()
    {
        cout<<"my money is: "<<money<<endl;
        cout<<"my father's money is: "<<amount;
    }
};


int main()
{
    son A;
    A.input();
    A.show();

    return 0;
}