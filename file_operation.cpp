/*This is a small C++ program that reads a text file and displays it on the screen.*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char ch[20];
    ifstream infile;
    infile.open("read.txt", ios::in);

    cout << "reading" << endl;

    while(!infile.eof())
    {
        infile >> ch.readline();
        cout << ch << endl;
    }

    infile.close();
    return 0;
}
