//Problem: Trapping rain water (medium level,, must do questiion)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n=6;
	int arr[n] = {3,0,8,2,0,4};
	int left_max[n];            //created two arrays for storing left and right maximum value 
	int right_max[n];
	int mx=arr[0];
	for (int i=0; i<n; ++i)
	{	
		if(arr[i]>mx)           //considered the value at index i also so that in case when both left and right max are less then the value at index i then it
			mx=arr[i];          //should not give us the negative value. ex: 3 0 8 2 0 4.  for value 8 leftmax=3 and rightmax=4 and min = 3,,sum += 3-8; 
		left_max[i] = mx;
	}
	mx=arr[n-1];
	for (int i=n-1; i>=0; --i)
	{
		if(arr[i]>mx)
			mx=arr[i];
		right_max[i] = mx;
	}
	long long sum=0;
	for (int i=1; i<n-1; ++i)
	{
		sum += min(left_max[i], right_max[i]) - arr[i];
	}
	cout << sum;
}