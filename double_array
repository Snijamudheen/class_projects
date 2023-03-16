/*This is a C++ program that takes an array from the user and displays a new array with each of its elements doubled.*/

#include <iostream>
using namespace std;

void doubleArr(int [],int);
void showArr(int [],int);

int main()
{
    const int SIZE = 4;
    int numbers[SIZE] = {10,20,30,40};
    int doub[SIZE];

    cout<<"the array is: "<<endl;
    showArr(numbers,SIZE);
    cout<<endl;

    cout<<"the doubled array is: "<<endl;
    doubleArr(numbers,SIZE);

    return 0;
}

void showArr(int num[],int SIZE){

    for(int index = 0;index < SIZE;index++){
        cout<< num[index]<<" ";
    cout<<endl;
    }
}

void doubleArr(int num[],int SIZE){

    for(int index = 0;index < SIZE;index++){
        cout<< num[index]*2 <<" ";
    cout<<endl;
    }
}
