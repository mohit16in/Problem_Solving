//Problem: Search in a row column sorted matrix   ***(matrix is sorted in increasing order)***
#include <bits/stdc++.h>
using namespace std;
 
int main ()
{ 
	int n, m , x;
	cin >> n >> m >> x;
	vector<vector<int> > matrix;
	for (int i=0; i<n; ++i)
	{
		std::vector<int> v;
		for (int j=0; j<m; ++j)
		{
			int c;
			cin >> c;
			v.push_back(c);
		}
		matrix.push_back(v);
	}										//input till here

	int low=0, high=m-1;
	bool find = false;
	while(high>=0 && low<n)
	{
		if(x==matrix[low][high])			
		{
			find = true;
			break;
		}
		else if(x>matrix[low][high])			// if the element to be searched is greater than the last element of that row then move on to the next row.
			low++;
		else									// else move in that row from end to start of that row
			high--;
	}
	if(find==true)
		cout << find;
	else
		cout << find;
}