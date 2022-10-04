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
        int a_count = 0;
        int b_count = 0;
        bool flag = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'a')
            {
                if (b_count == 1)
                {
                    flag = 1;
                    break;
                }
                a_count++;
                b_count = 0;
            }
            else if (s[i] == 'b')
            {
                if (a_count == 1)
                {
                    flag = 1;
                    break;
                }
                b_count++;
                a_count = 0;
            }
        }
        if (a_count == 1 || b_count == 1)
        {
            flag = 1;
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}