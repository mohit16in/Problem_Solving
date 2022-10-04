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
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        if (x <= a)
        {
            x = 0;
        }
        else
        {
            x = x - a;
        }
        if (y <= b)
        {
            y = 0;
        }
        else
        {
            y = y - b;
        }
        int tot = x + y;
        if (tot <= c)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}