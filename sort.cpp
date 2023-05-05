//C++ program that sorts an array in ascending order.

#include <iostream>
using namespace std;

int main()
{
	int arr[100];
	int i,j;
	int n;
	int temp;

	cout << "Enter size of elements to sort: " << endl;
	cin >> n;

	for(i = 0; i < n; i++)
	{
	   cout << "Enter element: " << endl;
	   cin >> arr[i];
	}

	for(i = 0; i < n; i++)
	{
	    for(j = i + 1; j < n; j++)
	    {
		if(arr[i] > arr[j])
		{
			temp   = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	    }
	}
	
	cout << "sorted array element in ascending order: " << endl;

	for(i = 0; i < n; i++)
	{
	    cout << arr[i] << endl;
	}
	return 0;
}
