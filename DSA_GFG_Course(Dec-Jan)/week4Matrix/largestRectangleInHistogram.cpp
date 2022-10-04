******* /* Problem: Largest Rectangle in Histogram */ *******

*                                                  ****** Brute Force (Time Complexity: O(n^2)) ******                                                  *

#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; ++i)
		cin >> arr[i];				//input till here

	int mx=0, curr_area;

	for(int i=0; i<n; ++i)
	{
		int r=i-1, l=i+1, count=1;
		while(arr[r]>=arr[i] && arr[l]>=arr[i])
		{
			if(r<0 || l==n)
				break;
			r--;
			l++;
			count += 2;
		}
		while (arr[r]>=arr[i])
		{
			if(r<0)
				break;
			count++;
			r--;
		}
		while(arr[l]>=arr[i])
		{
			if(l==n)
				break;
			count++;
			l++;
		}

		curr_area = count*arr[i];
		mx = max(mx, curr_area);
	}

	cout<<mx;
}