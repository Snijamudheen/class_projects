/*Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list.*/

#include <iostream>
using namespace std;

void selectionsort(int[], int);
void swap(int &, int &);

int main()
{
    const int SIZE = 6;
    int values[SIZE] = {3,2,5,4,1,6};

    cout << "The unsorted array is: " << endl;
    for(auto element:values)
        cout << element << " ";
    cout << endl;

    selectionsort(values, SIZE);

    cout << "The unsorted array is: " << endl;
    for(auto element:values)
        cout << element << " ";
    cout << endl;
}

void selectionsort(int array[], int size)
{
    int minval;
    int minindex;

    for(int start = 0; start < (size - 1); start++)
    {
        minindex = start;
        minval = array[start];

        for(int index = start + 1 ; index < size; index++)
        {
            if(array[index] > minval)
            {
                minval = array[index];
                minindex = index;
            }
        }
        swap(array[minindex], array[start]);
    }
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
