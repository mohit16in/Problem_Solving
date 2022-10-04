//Problem: Quick Sort (must revise)		(worst case time complexity is O(n^2) when the array is already sorted)

//it is not a stable sorting algorithm
//stable sorting algo : that sorts the identical elements in the same order as they appear in the input.

#include <bits/stdc++.h>  
using namespace std;

int partition (int arr[], int start, int end)
{
	int i=start;
	int j=end;
	int pivot = arr[start];	
	while(i<j)
	{
		while (arr[i]<=pivot) i++;  //this will stop when it will find an element greater than pivot element in initial array where we want elements less than pivot
		while (arr[j]>pivot) j--;   //this will stop when it will find an element less than pivot in the end part of array where we want elements greater than pivot
		if(i<j)
			swap(arr[i], arr[j]);
	}
	swap(arr[j], arr[start]);       //at the end the pivot will be swapped to it correct position and hence we can be sure that at least single element is sorted
	return j;
}

void quick_sort(int arr[], int low, int high)
{
	if(low<high)
	{
		int p_index = partition(arr, low, high);
		quick_sort(arr, low, p_index-1);        //recursive calls (need to learn recursion and backtrackking thoroughly)
		quick_sort(arr, p_index+1, high);
	}
}

int main ()
{
	int n=8;
	int arr[n]={80,10,30,90,40,50,70,20};
	quick_sort(arr, 0, n-1);
	for (int i=0; i<n; ++i)
	{
		cout << arr[i] << " ";
	}
}