#include <bits/stdc++.h>
using namespace std;


#define mod                 1000000007
#define inf                 INT_MAX
#define ll                  long long
#define endl				"\n"
#define pb                  push_back
#define w(t)                int t; cin >> t; while(t--)
#define vi                  vector<int>
#define pii                 pair<int, int>
#define mii                 map<int, int>
#define mci                 map<char, int>
#define mp                  make_pair


int main ()
{
	w(t)
	{
		int n;
		cin >> n;
		if(n%2==0)
		{
			cout << ((n-1)/2) << " " << ((n-1)/2)+1 << " " << 1 << endl;
		}
		else
		{
			if(((n-1)/2)%2==0)
				cout << ((n-1)/2)-1 << " " << ((n-1)/2)+1 << " " << 1 << endl;
			else
				cout << ((n-1)/2)+2 << " " << ((n-1)/2)-2 << " " << 1 << endl;
		}
	}	
}	