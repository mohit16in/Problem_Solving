//Problem: Reverse array in groups 
#include <bits/stdc++.h>
using namespace std;

int main () 
{
	int n=7; 
	int arr[n] = {1,2,3,4,5,6,7};       //Basically, we are given a window size and we need to reverse the array of that window size for the complete array.
	int k=3;
	for (int i=0; i<n; i+=k)
	{
		int s=i;
		int e=min(i+k-1, n-1);          //we will move with the window size until we encounter less elements compared to 'k' and then select min.
		while (s<e)
		{
			swap(arr[s++], arr[e--]);
		}
	}
	for (int i=0; i<n; ++i)
	{
		cout << arr[i] << " ";
	}
}