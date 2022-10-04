//Problem: Merge without extra space (merge two sorted arrays)      (hard level)        (performed using different method)      (best method: gap algorithm)
//striver problem sheet question (youtube playlist (take you forward) : placement series)
#include <bits/stdc++.h>
using namespace std;

void sort_arr2 (long long arr[], int m)
{
	int temp = arr[0];
	int j=1;
	while(arr[j]<temp && j<m)
	{
		arr[j-1] = arr[j];
		j++;
	}
	arr[j-1]=temp;
}

int main ()
{
	int n=4, m=5;
	long long arr1[n]={1,3,5,7};
	long long arr2[m]={0,2,6,8,9};
	int j=0;                    //basically, while iterating in array 1 if i will found an element that is greater than 1st element in array 2 than perform swap
	for (int i=0; i<n; ++i)     //the first element in array 2 will always be the minimum element out of all elements presentin array 2
	{                           //because just after swapping i am sorting the second array.
		if(arr1[i]>arr2[j])     //so as soon i complete iterting in array 1, i am sure that array 1 is sorted till 'i' and array 2 as well.
			swap(arr1[i], arr2[j]);
		sort_arr2(arr2, m);
	}
	for (int i=0; i<m; ++i)
		cout << arr2[i] << " ";
}