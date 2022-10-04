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
#define uset				unordered_set
#define setBits(n)			__builtin_popcount(n)
#define gcd(a, b)			__gcd(a, b)
#define lcm(a, b)			(a*b)/gcd(a,b)


int main ()
{
	w(t)
	{
		int l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		if(l1 <=r2 && l1 >= l2)
		{
			cout << max(l1, l2) << endl;
		}
		else if(l2 <= r1 && l2>=l1)
			cout << max(l1, l2) << endl;
		else 
			cout << l1 + l2 << endl;
	}			
}