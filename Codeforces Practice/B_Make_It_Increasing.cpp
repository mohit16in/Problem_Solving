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
        int count = 0;
        bool flag = 0;
        for (int i = 1; i < n; ++i)
        {
            bool check = 0;
            if (arr[i - 1] == arr[i] && arr[i] == 0)
            {
                flag = 1;
                break;
            }
            while (arr[i - 1] >= arr[i] && arr[i - 1] != 0)
            {
                check = 1;
                count++;
                arr[i - 1] = arr[i - 1] / 2;
            }
            if (check)
                i = 0;
        }
        if (flag)
        {
            cout << -1 << endl;
        }
        else
            cout << count << endl;
    }
}