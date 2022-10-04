//Example: 7 - Maze Paths with jumps                            this was a bit complex. didnt got the working of for loop completely

//expec: to find all the paths from (1,1) to (n,m) 
**** you can take jump of either 1, 2, 3, 4, ..... if you wont move out of the grid  ****
//faith: call for all possible moves using for loop 

//to meet the expec using faith add h to horizontal, v to vertical, d to diagonal and value of i using to_string() function.

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


vector<string> getMazePath(int sr, int sc, int dr, int dc)
{
	if(sr==dr && sc==dc)
	{
		vector<string> bresult;
		bresult.pb("");
		return bresult;
	}

	vector<string> paths;

	for(int i=1; i<=dc-sc; ++i)                                 // dc-sc will check if it is moving out of the grid or not (it might be in for n=1 but it might be out for n=2) 
	{
		vector<string> hpath = getMazePath(sr, sc+i, dr, dc);
		for(string hpaths : hpath)
			paths.pb("h" + to_string(i) + hpaths);
	}
	for(int i=1; i<=dr-sr; ++i)			
	{
		vector<string> vpath = getMazePath(sr+i, sc, dr, dc);
		for(string vpaths : vpath)
			paths.pb("v" + to_string(i) + vpaths);
	}   
	for(int i=1	; i<=dc-sc && i<=dr-sr; ++i)                    //for this we need to check for both horizontal and vertical grid whether it is in or out of the grid 
	{
		vector<string> dpath = getMazePath(sr+i, sc+i, dr, dc);
		for(string dpaths : dpath)
			paths.pb("d" + to_string(i) + dpaths);
	}
	return paths;
} 

int main ()
{
	int n, m;
	cin >> n >> m;
	vector<string> result = getMazePath(1, 1, n, m);    
	for(int i=0; i<result.size(); ++i)
		cout << result[i] << " ";
}