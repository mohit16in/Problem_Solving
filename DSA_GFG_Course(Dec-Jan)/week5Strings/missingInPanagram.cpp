//Problem: Missing Characters in Panagram (Panagram:: Sentence made by using all the alphabets)             (used sets for this question)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string str;
	cin >> str;
	set <char> s;
	for (int i=0; i<26; ++i)
		s.insert(char(97+i));           //initialized set with alphabets from a-z
	for(int i=0; i<str.size(); ++i)
	{
		if(int(str[i])<97)              // if found character in capital then converted it in small and then searched in set
		{
			char modified_char = char(int(str[i]) + 32);
			auto it = s.find(modified_char);
			if(it!=s.end())
				s.erase(it);
		}	
		else                            // case when the character is small already
		{
			auto it = s.find(str[i]);
			if(it!=s.end())
				s.erase(it);
		}
	}
	string result;
	for(auto value : s)
		result.push_back(value);
	if(result.size()==0)
		result = "-1";
	cout << result;
}
