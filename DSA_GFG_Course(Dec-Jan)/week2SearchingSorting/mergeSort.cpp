//Problem: Merge Sort
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
	int i=low, j=mid+1, k=low;		//low->mid == array1, (mid+1)->high == array2. Now using them we have to arrange all of them in sorted manner.
	int b[high]={0};				// creating an extra array of space complexity O(n)
	while(i<=mid && j<high+1)		
	{
		if(arr[i] > arr[j])			//this is very easy if you remember it. 	Merge two arrays with O(n) space complexity in Arrays week-1
			b[k]=arr[j++];
		else if(arr[i] <= arr[j])
			b[k]=arr[i++];
		++k;
	}
	while(i<=mid)
		b[k++]=arr[i++];
	while(j<=high)
		b[k++]=arr[j++];

	for(int p=low; p<high+1; ++p)
	{
		arr[p]=b[p];				// transfer back all those elements back in original array.
	}
}

void merge_sort(int arr[], int l, int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		merge_sort(arr, l, mid);
		merge_sort(arr, mid+1, r);
		merge(arr, l, mid, r);
	}
}

int main ()
{
	int n=6;
	int arr[]={2,4,1,5,6,3};
	merge_sort(arr, 0, n-1);
	for (int i=0; i<n; ++i)
		cout << arr[i] << " ";
}
