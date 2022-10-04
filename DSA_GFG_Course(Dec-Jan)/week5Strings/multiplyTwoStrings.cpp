//Problem: Multiply Two Strings (Medium Level: Advanced version of leetcode question)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string s1, s2;
	cin >> s1 >> s2;

	string result;
	if(s1=="0" || s2=="0")		// if any of it is 0 then the product will surely be == 0
	{
		cout << "chl bsdk";
		return 0;
	}

	int count=0;		// count to check how many numbers are negative in nature

	if(s1[0]=='-')		// if count == odd then the product will be odd hence we need to push '-' sign before hand only in result.
		count++;	
	if(s2[0]=='-')
		count++;

	vector<int> v (s1.size() + s2.size(), 0);		// FACT :: the length of the string will not be greater then the sum of length of each string.
	
	for(int i=s1.size()-1; i>=0; --i)
	{
		if(s1[i]=='-')		// if s1[i] == '-' sign then no need to implement the operations
			continue;
		for(int j=s2.size()-1; j>=0; --j)
		{
			if(s2[j]=='-')			// similarly for s2
				continue;
			v[i+j+1] += int(s1[i] - '0')*int(s2[j] - '0');					// this is the main logic which is wonderful.
			v[i+j] += v[i+j+1]/10;
			v[i+j+1] = v[i+j+1]%10;
		}
	}
	int i=0;						// ignoring the leading zeroes (initial / starting zeroes)
	while(i<v.size() && v[i]==0)
		i++;
	
	if(count%2!=0)
		result.push_back('-');
	for(; i<v.size(); ++i)			// transfering the elements from vector to string
	{
		result.push_back(char(v[i] + '0'));
	}
	cout << result;
}