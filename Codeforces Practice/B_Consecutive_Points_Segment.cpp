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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        bool flag = 0;
        int hsh[n] = {0};
        for (int i = 1; i < n; ++i)
        {
            hsh[i] = arr[i] - arr[i - 1];
        }
        // for(int i=1; i<n; ++i)
        // {
        // 	cout << hsh[i] << " ";
        // }
        // cout << endl;
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        int mx = *max_element(hsh + 1, hsh + n);
        if (mx > 3)
        {
            cout << "NO" << endl;
        }
        // cout << count(hsh, hsh+n, 3) << endl;
        else if (count(hsh + 1, hsh + n, 3) == 1 && count(hsh + 1, hsh + n, 2) == 0)
        {
            cout << "YES" << endl;
        }
        else if (count(hsh + 1, hsh + n, 3) == 0 && count(hsh + 1, hsh + n, 2) <= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
    }
}