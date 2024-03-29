/*The binary search algorithm divides the interval of search in half repeatedly to determine the location of the value it is looking for within a sorted array. \
The interval should be narrowed to the lower half if the value of the search key is less than the middle element. It should otherwise be narrowed to the upper half.
Binary search is more efficient than linear search. Compared to linear searches, binary searches are more complex in nature.*/

#include <iostream>
using namespace std;

int binaryS (const int[], int, int);

int main()
{
    const int SIZE = 10;
    int idnums[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int results;
    int empID;

    cout << "Enter an ID to be searched: " << endl;
    cin >> empID;

    results = binaryS(idnums, SIZE, empID);

    if(results == -1)
    {
        cout << "The ID does not exist." << endl;
    }
    else
    {
        cout << "The ID is found at position " << results + 1 << endl;
    }

    return 0;
}

int binaryS (const int arr[], int size, int value)
{
    int first = 0;
    int last = size - 1;
    int position = -1;
    bool found = false;
    int middle;

    while(first <= last && !found)
    {
        middle = (first + last) / 2; 
        
        if(arr[middle] == value)
        {    
            found = true;
            position = middle;
        }
        else if(arr[middle] > value)
            last = middle - 1;       
        else    
            first = middle + 1;
    }
    
    return position;
}
