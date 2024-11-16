#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream newfile("C:\\Users\\mrvih\\OneDrive\\Desktop\\c++_file_handling"); //for create a file(new file is a object)(b/w double quote is a location where we want to save our fie) (c++_file_handling" is the name of file)

    cout<<"file created....";

    newfile<<"Hey guy's\n good morning to all of you \n first of all hounrable teachers\n thanx for giving me a golden chance to introduce my self. \n me my self vishal kumar, i'm student of d.p.g degree college of technology, i'm doing BCA, also i want to be a software developer, my hobbie is playing cricket, watching movie, innovation new technologies,\n that's all\t THANK YOU !"; // use for printing text in your file

    newfile.close(); //using this or file is closed and it can't be run in background

    return 0;
}