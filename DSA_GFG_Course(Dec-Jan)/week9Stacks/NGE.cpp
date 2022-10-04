//Problem: Next greater element
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin >> arr[i];
	
	stack <int> s;
	vector<int> temp(n);
	for(int i=0; i<n; ++i)
	{
		while(!s.empty() && arr[i]>arr[s.top()])
		{
			temp[s.top()] = arr[i];
			s.pop();
		}
		s.push(i);

	}
	while(!s.empty())
	{
		temp[s.top()] = -1;
		s.pop();
	}
	for(int i=0; i<n; ++i)
	{
		cout << temp[i] << " ";
	}
}
