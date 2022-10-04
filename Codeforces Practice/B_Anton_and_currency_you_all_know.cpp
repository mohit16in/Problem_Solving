#include<bits/stdc++.h>
using namespace std;

#define mod                 1000000007
#define inf                 -1
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
    string s;
    cin >> s;
    int length = s.length()-1;
    int i= s.length()-1;
    int mx=inf;
    for(; i>=0; --i)
    {
    	int temp = s[i]-'0';
    	if(temp%2==0)
    	{
    		if(mx==inf)
    			mx=i;
    		else if(temp<int(s[length]-'0'))
    			mx=i;

    	}
    }
    if(mx==inf)
    {
        cout << -1 << "\n";
    }
    else
    {
        swap(s[mx], s[length]);
        cout << s << "\n";
    }
}