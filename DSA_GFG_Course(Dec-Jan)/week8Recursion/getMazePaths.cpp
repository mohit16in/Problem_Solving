// Example: 6 - Get Maze Paths 
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

//expec: to find out all the paths to reach from (1,1) to (n,m) or (0,0) to (n-1, m-1)
**** either you can take horizontal or vertical step at a time ****
//faith: you will get all the paths for reaching (n,m) from (1,2) and (2,1) respectively

//to meet expec using faith you need to ensure that the coordinates do not exceed the boundaries and paste h and v infront of faith paths.

vector<string> getMazePath(int sr, int sc, int dr, int dc)
{
	if(sr==dr && sc==dc)
	{
		vector<string> bresult;
		bresult.pb("");
		return bresult;
	}
	vector<string> hpath;
	vector<string> vpath;
	if(sc < dc)
	{
		hpath = getMazePath(sr, sc+1, dr, dc);
	}
	if(sr < dr)
	{
		vpath = getMazePath(sr+1, sc, dr, dc);
	}
	vector<string> paths;
	for(string &pr : hpath)
		paths.pb("h" + pr);
	for(string &pr : vpath)
		paths.pb("v" + pr);
	return paths;
} 

int main ()
{
	int n, m;
	cin >> n >> m;
	vector<string> result = getMazePath(1, 1, n, m);    
	for(auto &pr : result)
		cout << pr << " ";
}