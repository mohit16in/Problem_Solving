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
    w(t)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; ++i)
        {
            cin >> arr[i];
        }
        int parity1 = arr[0]%2;
        int parity2 = arr[1]%2;
        bool flag = 0;
        for(int i=0; i<n; i=i+2)
        {
            if(arr[i]%2 != parity1)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            cout << "NO" << endl;
            continue;
        }
        for(int i=1; i<n; i=i+2)
        {
            if(arr[i]%2!=parity2)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}