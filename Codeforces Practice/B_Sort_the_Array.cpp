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
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; ++i)
	{
		cin >> arr[i];
	}		
	int start=-1;		//start will denote the index from where the array proceed in decreasing order.
	int end=-1;			//end will denote the index from where the array again proceed in increasing order.
	for(int i=1; i<n; ++i)	//this loop will find the first segment which is not sorted if any prsent
	{
		if(arr[i] < arr[i-1])
		{
			if(start==-1)
				start=i-1;
		}
		if(start!=-1 && arr[i]>arr[i-1])
		{
			end = i;
			break;
		}
	}

	if(start!=-1)	//might be possible that the second if statement does not get invoked in some condition 
	{
		if(end==-1)
			end=n;	
	}

	if(start!=-1 && end!=-1)	//if there presents any segment that is not sorted then this will sort it
	{
		reverse(arr+start, arr+end);
	}
	bool flag=0;
	for(int i=1; i<n; ++i)
	{
		if(arr[i] < arr[i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout << "no\n";
	}
	else
	{
		cout << "yes\n";
		if(start==-1 && end==-1)
		{
			cout << start+2 << " " << end+2;
		}
		else
		{
			cout << start+1 << " " << end;
		}
	}

}