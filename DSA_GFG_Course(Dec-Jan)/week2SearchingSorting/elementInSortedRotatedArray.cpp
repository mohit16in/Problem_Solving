//Problem: Search an element in sorted and rotated array (took me 2 days but wasn't able to solve and atlast saw the code on youtube)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	vector <int> vec;
	int a;
	while(cin >> a)
		vec.push_back(a);
	int K=7;
	int n=vec.size();
	int start=0, end=n-1;
	while(start<=end)
	{
		int mid = (start+end)/2;
		if(vec[mid]==K)
		{
			cout << mid;
			break;
		}
		if(vec[mid]>=vec[start])
		{
			if(K>=vec[start] && K<=vec[mid])
				end=mid-1;
			else
				start=mid+1;
		}
		else if(vec[mid]<=vec[end])
		{
			if(K>=vec[mid] && K<=vec[end])
				start = mid+1;
			else
				end=mid-1;
		}
	}
	return 0;
}