//Problem: Anagram (An anagram of a string is another string that contains the same characters, only the order of characters can be different.)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string a, b;
	cin >> a >> b;
	map <char, int> anagram;		//map to store unique characters and their count
	if(a.size()!=b.size())
	{
		cout << "Not an Anagram";
		return 0;
	}
	for(int i=0; i<a.size(); ++i)	//loop-1: to initialize the map (to store value in the map using string 'a')
	{
		auto it = anagram.find(a[i]);
		if(it==anagram.end())		//if it can't search then it means that the element is not present already
		{
			anagram[a[i]] = 1;
		}
		else
		{
			anagram[a[i]]++;		//else it will keep on incrementing the count of that particular element
		}
	}
	for(int i=0; i<b.size(); ++i)
	{
		auto it = anagram.find(b[i]);	//traverse the string 'b' and find the element in map. If not found => not anagram
		if(it==anagram.end())
		{
			cout << "Not an Anagram";
			return 0;
		}
		else if(it->second == 0)		// if for an element the count in map is already 0 hence it means that element is extra in 'b' => not an anagram
		{
			cout << "Not an Anagram";
			return 0;
		}
		else							// else will keep on decreasing the count as we move forward in traversing
			it->second--;
	}
	cout << "Anagram";
}	
