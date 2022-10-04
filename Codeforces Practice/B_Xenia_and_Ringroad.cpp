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
    int n, m;
    cin >> n >> m;
    int a[m];
    for(int i=0; i<m; ++i)
    {
        cin >> a[i];
        // cout << a[i] << " ";
    }
    
    long long int current = 1;
    long long int result = 0;
    for(int i=0; i<m; ++i)
    {
        if(a[i]>=current)
        {
            result += a[i] - current;
        }
        else
        {
            result += n-current + (a[i]);
        }
        current = a[i];
    }
    cout << result;
}