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
		ll n;
		cin >> n;
		ll arr[n];
		for(int i=0; i<n; ++i)
			cin >> arr[i];
		int even =0, odd=0;
		bool flag=0;
		ll result=0;
		for(int i=1; i<n-1; ++i)
		{
			if(arr[i]!=1)
				flag=1;
			if(arr[i]%2==0)
				even++; 
			else if(arr[i]%2!=0)
				odd++;
		}
		if(flag==0)                     //if every single element between 1st and nth element is '1'
			cout << -1 <<endl;
		else if(even==0 && odd==1)      //single even has power to convert everyone to even 
			cout << -1 << endl;
		else
		{
			for(int i=1; i<n-1; ++i)
				result += ceil(arr[i]/2.0);
			cout << result << endl;	
		}
	}
}