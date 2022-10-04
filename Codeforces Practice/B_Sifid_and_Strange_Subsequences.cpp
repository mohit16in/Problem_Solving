#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define inf INT_MAX
#define ll long long
#define endl "\n"
#define pb push_back
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define vi vector<int>
#define pii pair<int, int>
#define mii map<int, int>
#define mci map<char, int>
#define uset unordered_set
#define setBits(n) __builtin_popcount(n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)

int main()
{
    w(t)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        vi v;
        ll i = 0;
        ll min_diff = INT_MAX;
        long long prev_max = 0;
        for (; i < n; ++i)
        {

            if (arr[i] <= 0)
                v.pb(arr[i]);
            else
                break;
            prev_max = abs(arr[i] - arr[i - 1]);
            min_diff = min(min_diff, prev_max);
        }
        // cout << min_diff << endl;
        if (i <= n - 1 && i != 0)
        {
            if (arr[i] <= min_diff)
                v.pb(arr[i]);
        }
        else if (i == 0)
            v.pb(arr[i]);
        // for(auto ele : v)
        //     cout << ele << " ";
        cout << v.size() << endl;
        // cout << endl;
    }
}