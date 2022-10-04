//Problem: Print Target Sum Subsets
#include <bits/stdc++.h>
using namespace std;

void printTargetSumSubsets(int arr[], int idx, string set, int sos, int tar, int n)
{
	if(idx==n)
	{
		if(sos==tar)
			cout << set << endl;
		return;
	}
	printTargetSumSubsets(arr, idx+1, set+to_string(arr[idx])+",", sos+arr[idx], tar, n);
	printTargetSumSubsets(arr, idx+1, set, sos, tar, n);
}

int main ()
{
 	int n;
 	cin >> n;
 	int arr[n];
 	for(int i=0; i<n; ++i)
 	{
 		cin >> arr[i];
 	}
 	int target;
 	cin >> target;
 	printTargetSumSubsets(arr, 0, "", 0, target, n);   
}