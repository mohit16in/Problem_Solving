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
        string s;
        cin >> s;
        if (n == 1)
        {
            if (s[0] == 'B' || s[0] == 'R')
            {
                cout << "NO" << endl;
                continue;
            }
            else
            {
                cout << "YES" << endl;
                continue;
            }
        }
        else if (n == 2)
        {
            if ((s[0] == 'W' && s[1] == 'W') || (s[0] == 'B' && s[1] == 'R') || (s[0] == 'R' && s[1] == 'B'))
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }
        else
        {
            int i = 0;
            vector<string> v;
            string temp = "";
            for (; i < n; ++i)
            {
                if (s[i] == 'W')
                {
                    if (temp == "")
                    {
                        continue;
                    }
                    v.push_back(temp);
                    temp = "";
                }
                else
                {
                    temp += s[i];
                }
            }
            if (i == n)
            {
                if (temp != "")
                {
                    v.push_back(temp);
                }
            }
            bool flag = 0;
            // for(int i=0; i<v.size(); ++i)
            // 	cout << v[i] << " ";
            // cout << endl;
            if (v.size() == 0)
            {
                cout << "YES" << endl;
                continue;
            }
            for (int i = 0; i < v.size(); ++i)
            {
                auto itR = find(v[i].begin(), v[i].end(), 'R');
                auto itB = find(v[i].begin(), v[i].end(), 'B');
                if (itR == v[i].end() || itB == v[i].end())
                {
                    flag = 1;
                    cout << "NO" << endl;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "YES" << endl;
            }
        }
    }
}