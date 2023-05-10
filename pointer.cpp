//This is a small C++ program that helps understand the working of pointers.

#include <iostream>
using namespace std;

int main()
{
    int x = 25;
    int *ptr = nullptr; //nullptr is address 0
                        //ptr is the name of the pointer variable

    ptr = &x; // assign pointer variable with the address of x
    cout << "The value in x is " << x << endl;
    cout << "The address of x is " << ptr << endl;

    system("pause");
}
