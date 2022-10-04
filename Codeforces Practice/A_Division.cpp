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
        int x;
        cin >> x;
        if (x <= 1399)
        {
            cout << "Division 4" << endl;
        }
        else if (x >= 1400 && x <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else if (x >= 1600 && x <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else
            cout << "Division 1" << endl;
    }
}