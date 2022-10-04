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
        ll left, right, a;
        cin >> left >> right >> a;
        ll mx;
        mx = right/a;
        ll ans1= (right / a) + (right % a);
        if(mx<1)
        {

            cout << (right / a) + (right % a) << endl;
        }
        else
        {
            mx = mx*a - 1;
            ll ans2 = (mx / a) + (mx % a);
            cout << max(ans1, ans2) << endl;
        }
        
        // ll ans1 = (mx / a) + (mx % a);
        // cout << max(ans1, ans2) << endl;
    }
}