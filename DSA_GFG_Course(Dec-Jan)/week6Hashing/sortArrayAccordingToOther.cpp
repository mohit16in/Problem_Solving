//Problem: Sort an array according to other
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n, m;
	cin >> n >> m;
	vi a1;
	vi a2;
	for (int i=0; i<n; ++i)
	{
		int x;
		cin >> x;
		a1.pb(x);
	}   
	for (int i=0; i<m; ++i)
	{
		int x;
		cin >> x;
		a2.pb(x);
	}   

	mii maap;
	for(int i=0; i<n; ++i)
		maap[a1[i]]++;
	int count = 0;
	for(int i=0; i<m; ++i)
	{
		auto it = maap.find(a2[i]);
		if(it!=maap.end())
			count++;
		if(it!=maap.end())
		{
			while(maap[a2[i]]--)
				cout << a2[i] << " ";
		}
	}
	for(auto &pr : maap)
	{
		auto it = find(a2.begin(), a2.end(), pr.first);
		if(it==a2.end())
		{
			while(maap[pr.first]--)
				cout << pr.first<< " ";
		}
	}
}