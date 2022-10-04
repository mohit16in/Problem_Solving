//Problem: Peak Element (log n)		(mountains)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n=7;
	int arr[n] = {14, 14, 10, 4, 13, 8, 17};
	int start=0,end=n;
	while(start<=end)
	{
		int mid = (start+end)/2;
		if(mid==0 && arr[mid]>=arr[mid+1])		//it is said in the question itself that the peak element is one which is either greater or equal to its adjacent
		{
			cout << mid;
			break;
		}
		else if (mid==n-1 && arr[mid]>=arr[mid-1])
		{
			cout << mid;
			break;
		}
		else if(arr[mid]>=arr[mid+1] && arr[mid]>=arr[mid-1])
		{
			cout << mid;
			break;
		}
		else if(arr[mid]<arr[mid-1])	//if the current value is at mid is less than it is sure that the value to either of its side is high compared to it 
			end=mid-1;
		else
			start = mid+1;
	}

}