//Problem: Isomorphic Strings (Isomorphic: Two strings are isomorphic if there is one to one mapping possible from both the stings)

----- Brute Force -----
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string str1, str2;
	cin >> str1 >> str2;
	if(str1.size() != str2.size())              //check for equal size
	{
		cout << "false";
	}
	int arr[130] = {0};                 //created an array for hashing
	for(int i=0; i<str1.size(); ++i)        //checked whether it has one to one mapping from str1 to str2
	{
		if(arr[str1[i]]==0)             
			arr[str1[i]] = str2[i];
		else 
		{
			if(arr[str1[i]]!= str2[i])
			{
				cout << i << endl << "loop-1" << endl;
				// return false;
				cout << "false";
				break;
			}
		}
	}
	int ARR[130] = {0};                 //created another array for hashing from other side
	for(int i=0; i<str2.size(); ++i)            //checked whether it has one to one mapping from str2 to str1
	{
		if(ARR[str2[i]]==0)
			ARR[str2[i]] = str1[i];
		else 
		{
			if(ARR[str2[i]]!= str1[i])
			{
				cout << i << endl << "loop-2" << endl;
				// return false;
				cout << "false";
				break;
			}
		}
	}
	// return true;
}