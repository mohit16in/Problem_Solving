//Problem: Union Of Two Sorted Arrays (thought about it own my own without any help: felt great)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n=16;
	int m=11;
	int arr1[]={1, 2, 6, 7, 7, 15, 21, 30, 39, 41, 41, 43, 43, 44, 47, 49};
	int arr2[]={5, 7, 9, 17, 24, 27, 30, 32, 35, 41, 49};
	vector <int> v;
	int i=0, j=0;
	while(i<n && j<m)
	{
		if(arr1[i]<=arr2[j])
		{
			v.push_back(arr1[i]);
			++i
		}
		if(arr1[i]>arr2[j])
			v.push_back(arr2[j++]);
	}
	while(i<n)
	{
		v.push_back(arr1[i]);
		++i;
	}
	while(j<m)
	{
		v.push_back(arr2[j]);
		j++;
	}							//till here pushed all the elements in vector v in sorted manner

	vector <int>::iterator it = v.begin();
	for (int i=0; i<v.size()-1; ++i)
	{
		// it=v.begin();
		if(v[i]==v[i+1])
		{
			// it = it+i;
			v.erase(it+i);		//erased the duplicates
			--i;
		}
	}
	for (int i=0; i<v.size(); ++i)
	{
		cout << v[i] << " ";
	}
}
