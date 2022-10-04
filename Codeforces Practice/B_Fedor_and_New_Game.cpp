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


int main ()
{
	int n, m, k;
	cin >> n >> m >> k;
	int arr[m];
	for(int i=0; i<m; ++i)
	{
		cin >> arr[i];
	}
	int fedor;
	cin >> fedor;

	//this will teach us how to find number of differnt bits in two numbers

	int friends = 0;
	for(int i=0; i<m; ++i)
	{
		int XOR = arr[i]^fedor;
    	int count=0;
    	while(XOR>0)
    	{
    	    if((XOR) & 1)
    	        count ++;
    	    XOR = XOR>>1;
    	}
    	if(count <= k)
    		friends++;
	}
	cout << friends;
}