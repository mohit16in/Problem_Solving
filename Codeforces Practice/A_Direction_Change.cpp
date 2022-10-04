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
        int n, m;
        cin >> n >> m;
        if (n == m)
        {
            cout << (2 * n) - 2 << endl;
        }
        else if ((n == 1 || m == 1) && abs(n - m) > 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int diff = max(n, m) - min(n, m);
            if (diff % 2 == 0)
            {
                cout << ((2 * min(n, m)) - 2) + diff * 2 << endl;
            }
            else
            {
                cout << ((2 * min(m,n)) - 2) + diff * 2 - 1 << endl;
            }
        }
    }
}