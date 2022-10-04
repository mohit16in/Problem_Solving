//Problem: Selection Sort (Time Complexity: O(n^2))
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n=6;
	int arr[n] = {6,5,4,3,2,1};		//selection sort: select the min element from the unsorted array and place it in the sorted array in ascending order
	for (int i=0; i<n-1; ++i)
	{
		int min_index=i;            
		for (int j=i+1; j<n; ++j)
		{
			if(arr[j]<arr[min_index])
			{
				min_index = j;
			}
		}
		swap(arr[i], arr[min_index]);
	}	
	for (int i=0; i<n; ++i)
	{
		cout << arr[i] << " ";
	}
}