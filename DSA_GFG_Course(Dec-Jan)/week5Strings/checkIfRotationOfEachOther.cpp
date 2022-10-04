//Problem: Check if strings are rotations of each other or not
----- Approach number-1 -----
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string s1, s2;
	cin >> s1 >> s2;
	for(int i=0; i<s1.size()-1; ++i)        //keep on reversing the string one by one and check whether that matches with s2 or not
	{
		reverse(s1.begin()+1, s1.end());	//these operations in combine will reverse the string[0] character in each iteration
		reverse(s1.begin(), s1.end());
		if(s1==s2)
		{
			cout << "true";
			break;
		}
	}	
}

----- Approach number-2 -----
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string s1, s2;
	cin >> s1 >> s2;
	string temp = s1+s1;            // add the first string to itself and search if s2 is a part of concatenated string or not  
	for(int i=0; i<temp.size(); ++i)       
	{
		int j=0;
		for(; j<s2.size(); ++j)
		{
			if(temp[i+j]!=s2[j])
				break;
		}
		if(j==s2.size())
		{
			cout << "true";
			break;
		}
	}
}