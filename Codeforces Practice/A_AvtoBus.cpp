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
        long long n;
        cin >> n;
        if (n < 3)
        {
            cout << -1 << endl;
        }
        else
        {
            if (n % 6 == 0)
            {
                if (n % 4 == 0)
                {
                    cout << n / 6 << " " << n / 4 << endl;
                }
                else
                {
                    cout << n/6 << " " << (n/6)/2 * 3 + 1 << endl;
                }
            }
            else if (n % 4 == 0)
            {
                if(n<5)
                {
                    cout << n/4 << " " << n/4 << endl;
                }
                else
                {
                    cout << n / 4 - (n / 4 % 3) << " " << n / 4 << endl;
                }
            }
            else if(n%2==1)
                cout << -1 << endl;
            else if(n%2==0)
            {
                cout << n/6 + 1 << " " << n/4 << endl;
            }
        }
    }
}