//Problem: Leaders in an array
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n=5;
	int arr[n] = {1,2,3,4,0};       //Basically, we need to find elements that are max compared to their right one's
	int mx=0;
	vector <int> leader;
	for (int i=n-1; i>=0; --i)
	{
		mx = max(arr[i], mx);       //We will carry max with us and as soon as we find another max we will add that to the vector.
		if(mx==arr[i])
		{
			leader.push_back(arr[i]);
		}
	}
	for (auto i:leader)
		cout << i << " ";
}
