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
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int count = 1;
        int val = -1;
        bool flag = 0;
        int i = 1;
        for (; i < n; ++i)
        {
            if (arr[i] == arr[i - 1])
                count++;
            else
            {
                if (count > 2)
                {
                    flag = 1;
                    val = arr[i - 1];
                    break;
                }
                count = 1;
            }
        }
        if (count > 2)
        {
            if (flag == 0)
            {
                val = arr[i - 1];
            }
        }
        cout << val << endl;
    }
}