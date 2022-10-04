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
        int n, k;
        cin >> n >> k;
        vector<pii> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end());
        int ans = 1;
        for (int i = 1; i < n; ++i)
        {
            if (v[i - 1].second + 1 != v[i].second)
            {
                ans++;
            }
        }
        if (ans <= k)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}