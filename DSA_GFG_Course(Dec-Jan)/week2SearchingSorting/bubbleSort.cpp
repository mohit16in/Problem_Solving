//PROBLEM: BUBBLE SORT (Time Complexity: O(n^2))
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n=6;
	int arr[n] = {6,5,4,3,2,1}; //reverse arraangement of array elements gives the maximum number of swaps. ((n-1)*n)/2
	int count = 0;              //this is to check the number of swaps 
	for (int i=0; i<n-1; ++i)
	{
		bool flag = 0;
		for (int j=0; j<n-i-1; ++j)
		{
			if(arr[j]>arr[j+1])
			{
				count++;    
				flag = 1;               //if no swaps occur that means the array is already sorted
				swap(arr[j], arr[j+1]);
			}
		}
		if(flag == 0)
		{
			break;
		}
	}
	for (int i=0; i<n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl << count;
}
