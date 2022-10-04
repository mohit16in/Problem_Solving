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
        string s;
        cin >> s;
        char c;
        cin >> c;
        int n = s.size();
        bool flag = 0;
        int count = 0;
        int len = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == c)
            {
                count++;
                len = n - count;
                // cout << "len == " << len << endl;
                // cout << "count == " << count-1 << en`dl;
                if (len % 2 == 0 && (count - 1) % 2 == 0)
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                count++;
            }
        }
        if (flag)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}