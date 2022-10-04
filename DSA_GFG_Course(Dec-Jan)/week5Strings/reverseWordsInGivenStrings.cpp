//Problem: Reverse words in a given string
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string s;
	cin >> s;
	int j = 0;
	for(int i=0; i<s.size(); ++i)			// first reverse each word and then reverse whole string
	{
		if(s[i] == '.')
		{
			reverse(s.begin()+j, s.begin()+i);
			j=i+1;
		}
		if(i==s.size()-1)					//for last word
		{
			reverse(s.begin()+j, s.end());
		}
	}
	reverse(s.begin(), s.end());
	cout << s;
}
