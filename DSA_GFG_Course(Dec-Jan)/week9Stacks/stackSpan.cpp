//Problem: Stock Span Problem
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	int price[n];
	for(int i=0; i<n; ++i)
		cin >> price[i];

	vector<int> temp(n);
	stack <int> st;
	for(int i=n-1; i>=0; --i)
	{
		while(!st.empty() && price[i] > price[st.top()])
		{
			temp[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty())
	{
		temp[st.top()] = st.top();
		st.pop();
	}                               //next greater element on the right side of the element
	
	// for(int i=0; i<n; ++i)
	// {
	// 	cout << temp[i] << " ";
	// }
	// cout << endl << endl;
	for(int i=0; i<n; ++i)
	{
		if(temp[i] == i)
		{
			temp[i] = temp[i] + 1;
		}
		else 
		{
			temp[i] = i-temp[i];
		}
	}
	for(int i=0; i<n; ++i)
	{
		cout << temp[i] << " ";
	}
}	
