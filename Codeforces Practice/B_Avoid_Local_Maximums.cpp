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
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        int count = 0;
        for (int i = 1; i < n - 1; ++i)
        {
            if (arr[i] > arr[i - 1] && (i - 1) != 0)
            {
                arr[i - 1] = arr[i];
                count++;
            }
            else if (arr[i] > arr[i + 1] && (i + 1) != n - 1)
            {
                arr[i + 1] = arr[i];
                count++;
            }
        }
        cout << count << endl;
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}