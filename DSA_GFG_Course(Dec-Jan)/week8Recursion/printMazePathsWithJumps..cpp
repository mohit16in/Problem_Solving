//Problem: Print Maze Paths with jumps
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

void printMazePaths(int sr, int sc, int dr, int dc, string ans)
{
	if(sc==dc && sr==dr)
	{
		cout << ans << endl;
		return;
	}
	for(int i=1; i<=dc-sc; ++i)
	{
		printMazePaths(sr, sc+i, dr, dc, ans+"h"+to_string(i));
	}
	for(int i=1; i<=dr-sr; ++i)
	{
		printMazePaths(sr+i, sc, dr, dc, ans + "v" + to_string(i));
	}
	for(int i=1; i<=dr-sr && i<=dc-sc; ++i)
	{
		printMazePaths(sr+i, sc+i, dr, dc, ans + "d" + to_string(i));
	}
}

int main ()
{
 	int n, m; 
 	cin >> n >> m;
 	printMazePaths(1, 1, n, m, "");   
}