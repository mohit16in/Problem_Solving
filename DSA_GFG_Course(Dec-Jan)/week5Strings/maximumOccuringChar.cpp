//Problem: Maximum Occuring Character
----- Brute Force Approach -----
 int hash[256] = {0};
for(int i=0; i<str.size(); ++i)
{
	hash[str[i]]++;
}
// cout <<  *max_element(hash+0, hash+256);
int mx_index = 0;
int mx_count=0;
for(int i=0; i<256; ++i)
{
	if(hash[i]>mx_count)
	{
		mx_count = hash[i];
		mx_index = i;
	}
}
return char(mx_index);

---------------------------------------------------------

----- Optimized Approach -----      /*(Using MAPS)*/
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string str;
	cin >> str;
	map <char, int> m;              //declaration of map (char value's are unique)
	for(int i=0; i<str.size(); ++i)
	{
		auto it = m.find(str[i]);       // find() function gives different data type pointer so i stored it in "it"
		if(it!=m.end())                 // if the element to be found is not present in map then it passes index of next to the last element
		{
			m[str[i]]++;                // this if condition confirms that the element if found within the map
		}
		else
		{
			m[str[i]] = 1;              // else initialize its count by 1
		}
	}
	char max_occuring_charcter;
	int max_count=0;
	for(auto &pr : m)
	{
		// cout << pr.first << " " << pr.second << endl;	
		if(pr.second>max_count)
		{
			max_count = pr.second;
			max_occuring_charcter = pr.first;       // already maintains a sorted list
		}
	}
	cout<< max_occuring_charcter;
}
