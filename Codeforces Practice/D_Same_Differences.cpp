#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define inf 1e18
#define ll long long
#define pb push_back
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define vi vector<int>
#define pii pair<int, int>
#define mii map<int, int>
#define mci map<char, int>
#define mp make_pair

//this is also a very nice problem to solve
//the equation can be further solved as:
/*
    a[j]-a[i] = j-i
    a[j]-j = a[i]-i
    Now find all those pairs which have same values stored at their address
*/

int main()
{
    w(t)
    {
        int n;
        cin >> n;
        // int *arr = new int[n];
        ll count = 0;
        mii m;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            x -= i;
            count = m[x] + count;
            m[x]++;
        }
        cout << count << endl;
    }
}