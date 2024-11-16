#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    string str;
    ifstream newfile("C:\\Users\\mrvih\\OneDrive\\Desktop\\c++_file_handling"); //use for reading

    while(getline(newfile,str)) 
    {
        cout<<str;
    }

    newfile.close();

    return 0;

}