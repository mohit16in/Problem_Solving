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

//Problem: exactly 3 divisors

bool is_prime(ll root)
{
	for(int i=2; i<=sqrt(root); ++i)
	{
		if(root%i==0)
			return false;
	}
	return true;
}

int main ()
{
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0; i<n; ++i)
    {
        cin >> arr[i];
    }
 	for(ll i=0; i<n; ++i)
 	{
 		ll sq_root = sqrt(arr[i]);
 		if(arr[i]==1)
 			cout << "NO\n";
 		else if(sq_root*sq_root==arr[i])
 		{
 			bool check = is_prime(sq_root);
 			if(check)
 			{
 				cout << "YES\n";
 			}
 			else
 				cout << "NO\n";
 		}
 		else
 			cout << "NO\n";
 	}
}