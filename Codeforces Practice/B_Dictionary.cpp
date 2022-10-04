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
        int part_1 = (int(s[0]) - 97) * 25;
        int part_2 = 0;
        if (s[1] < s[0])
        {
            part_2 = int(s[1]) - 96;
        }
        else
        {
            part_2 = int(s[1]) - 97;
        }
        cout << part_1 + part_2 << endl;
    }
}