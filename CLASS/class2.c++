#include <iostream>
using namespace std;

class person
{
    /*by default it is private,, and you can't give value in this logical section bcz class is a 
    template where we can declare but we can't initialized*/
    int run; // data member
    string msg;

public:
    void play()
    {
        run = 50;
        cout << "today i scored " << run << "run" << endl;
    }

    void walk()
    {
        msg = "today i walked 20km";
        cout << msg << endl;
    }
};

int main()
{
    person boy;

    boy.play();
    boy.walk();

    return 0;
}