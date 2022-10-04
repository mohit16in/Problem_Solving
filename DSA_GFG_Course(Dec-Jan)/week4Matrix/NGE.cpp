//Problem: Next Greater Element (nge using stacks by luv) (Time Complexity: O(n))
#include <bits/stdc++.h>
using namespace std;

vector<int> nge (vector<int> v)
{	
	vector<int> NGE(v.size());
	stack<int> st;
	for(int i=0; i<v.size(); ++i)
	{
		while(!st.empty() && v[i] > v[st.top()])
		{
			NGE[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty())
	{
		NGE[st.top()] = -1;
		st.pop();
	}

	return NGE;
}

int main ()
{
	int n;
	cin >> n;
	vector<int> v(n);		// if declared the size of vector while declaring it then can get input like cin >> v[i]
	for (int i=0; i<n; ++i)	// else we need to take input in a variable and then need to push it to the vector.
		cin >> v[i];
	vector<int> NGE = nge(v);
	for(int i=0; i<n; ++i)
	{
		cout << v[i] << " " << (NGE[i]==-1 ? -1 : v[NGE[i]]) << endl;
	}
}	