//Problem: Sort an array of 0's, 1's and 2's 	(Dutch National Flag Algorithm)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n=7;
	int arr[]={2,1,1,0,2,0,2};
	int low=0, mid=0, high=n-1;
	while(mid<=high)		//missed "=" sign in this and got a failed TC whose n was 6754 :)
	{
		if(arr[mid]==0)						//for "0"  -->  a[low++], a[mid++] 
		{									//for "1"  -->  mid++
			swap(arr[mid], arr[low]);		//for "2"  -->  a[mid], a[high--]
			++low;
			mid++;
		}
		else if(arr[mid]==2)
		{
			swap(arr[mid], arr[high]);
			high--;
		}
		else
			mid++;
	}	
	for (int i=0; i<n; ++i)
		cout << arr[i] <<  " ";
}