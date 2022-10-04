//Problem: Print Stair Paths
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

void printStaitPaths(int n, string ans)
{
	if(n==0)
	{
		cout << ans << endl;
		return;
	}
	if(n<0)
	{
		return;
	}

	printStaitPaths(n-1, ans + to_string(1));
	printStaitPaths(n-2, ans + to_string(2));
	printStaitPaths(n-3, ans + to_string(3));
}

int main ()
{
 	//print stair paths 
 	int n;
 	cin >> n;
 	printStaitPaths(n, "");   
}