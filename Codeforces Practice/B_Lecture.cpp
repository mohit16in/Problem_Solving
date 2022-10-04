#include <bits/stdc++.h>
using namespace std;


#define mod                 1000000007
#define inf                 1e18
#define ll                  long long
#define pb                  push_back
#define w(t)                int t; cin >> t; while(t--)
#define vi                  vector<int>
#define pii                 pair<int, int>
#define mii                 map<int, int>
#define mci                 map<char, int>
#define mp                  make_pair

//question overview: make the notes such that the words used in it remain smallest in length.

int main ()
{
	int n, m;
	cin >> n >> m;
	map<string, string> letters;
	for(int i=0; i<m; ++i)
	{
		string first, second;
		cin >> first;
		cin >> second;
		letters[first] = second; 
		// cout << letters[first] << " ";
	}		
	// cout << endl;
	string arr[n];
	for(int i=0; i<n; ++i)
	{
		string lecture;
		cin >> lecture;
		arr[i] = lecture;
		// cout << arr[i] << " ";
	}                                                       //input till here
    
	for(int i=0; i<n; ++i)
	{
		// letters.find(arr[i]);
		if(arr[i].length()<=letters[arr[i]].length())
		{
			cout << arr[i] << " ";
		}
		else
			cout << letters[arr[i]] << " ";
	}
}