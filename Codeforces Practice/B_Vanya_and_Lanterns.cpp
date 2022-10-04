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

//learned that in order to get precision uptil any fixed digits we need to use "fixed" with setprecision().

int main ()
{
	int n, l;
	cin >> n >> l;
	int arr[n];
	for(int i=0; i<n; ++i)
	{
		cin >> arr[i];
	}			
	sort(arr, arr+n); 
	int max_d=0;
	for(int i=1; i<n; ++i)
	{
		max_d = max(max_d, (arr[i]-arr[i-1]));
	}
	// cout << max_d << endl;
	int temp_max=0;
	if(arr[0]!=0)
	{
		temp_max = arr[0]-0;
	}
	// cout << temp_max << endl;
	if(arr[n-1]!=l)
	{
		temp_max = max(temp_max, (l-arr[n-1]));
	}
	// cout << temp_max << endl;
	// cout << setprecision(10) << fixed << double(2);
	double result = (double(max_d)/double(2));
	if(double(temp_max)>=result)
	{
		result = double(temp_max);
	}
	cout << setprecision(10) << fixed << result;
    
}