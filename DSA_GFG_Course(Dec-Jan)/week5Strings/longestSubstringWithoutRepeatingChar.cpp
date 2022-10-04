//Problem: Longest Substring Without Repeating Characters  (medium level solved in one go, actually didn't expected)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string s;
	cin >> s;
	string curr_s;					// temp string
	int count=0, mx=0, lst_index=-1;		//lst_index: to store the last occurence of the repeating character in curr_s
	for(int i=0; i<s.size(); ++i)
	{
		int pos = curr_s.find(s[i]);	
		if(pos<0 || pos>curr_s.size()-1)		// if s[i] is not found in curr_s then push_back it in curr_s and increment the count
		{
			curr_s.push_back(s[i]);
			count++;
			mx = max(mx, count);			// store the max length of the curr_s
		}
		else
		{
			for(int j=lst_index+1; j<i; ++j)		// else search for the last occurence of repeating element and initialize i to it's next element 
			{										// and start making another curr_s from lst_index+1
				if(s[j]==s[i])
				{
					lst_index = j;
					i=j;
					curr_s = "";
					count=0;
				}
			}
		}
	}
	cout << mx;
}