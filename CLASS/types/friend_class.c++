#include <iostream>
using namespace std;

class seenu
{
    private:
        int a, b;

    public:
    void rahul()
        {
            a=20;
            b=25;
        }
    
        friend class vihaan;  //(seenu),,, is a friend with vihaan class
};

class vihaan
{
    int c;

    public:
        int bishu(seenu ref) //seenu is your friend class and a reference for accessing
        {
            c = ref.a + ref.b;
            cout << c;
        }
};

int main()
{
    seenu obj;
    obj.rahul();

    vihaan obj2;

    obj2.bishu(obj);

    return 0;
}