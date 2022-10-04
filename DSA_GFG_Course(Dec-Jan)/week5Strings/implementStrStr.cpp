//Problem: Implement strstr (pattern matching in string using naive method because i don't know the rest of two)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string s;
	string x;
	cin >> s;	
	cin.ignore();
	cin >> x;

	int s_size = s.size();
	int x_size = x.size();

	for(int i=0; i<s_size; ++i)     //traversing each element of bigger string
	{
		int j;
		for(j=0; j<x_size; ++j)        //traversing each element of smaller string and finding if it overlaps with any substring of bigger string
		{
			if(s[i+j]!=x[j])
				break;
		}
		if(j==x_size)               //if it overlaps then the size of j and smaller substring will be equal.
			cout<<i<<endl;
	}
}