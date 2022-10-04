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
		int arr[n];
		int temp[n];
		for(int i=0; i<n; ++i)
			cin >> arr[i];
		int len=1;
		for(int i=0; i<n; ++i)
			temp[i] = arr[i];
		for(int i=n-2; i>=1; --i)
		{
			if(arr[i]<=arr[i+1])
				len++;
			else
				break;
		}
		len = n-len;
		// cout << len << endl;
		sort(temp, temp+n);
		sort(arr, arr+len);
		sort(arr+len, arr+n);
		bool flag=1;
		for(int i=0; i<n; ++i)
		{
			if(temp[i]!=arr[i])
				flag=0;
		}
		if(flag==0)
			cout << "YES\n";
		else
			cout << "NO\n";
		
	}
}