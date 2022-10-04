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
        int n, m;
        cin >> n >> m;
        char arr[n][m];
        int min_row = 0, min_col = 0;
        bool flag = 0;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                cin >> arr[i][j];
                if (!flag)
                {
                    if (arr[i][j] == 'R')
                    {
                        min_row = i;
                        min_col = j;
                        flag = 1;
                    }
                }
            }
        }
        min_row -= 1;
        min_col -= 1;
        bool check = 0;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                // if(i==min_row && j==min_col)
                // {
                // 	continue;
                // }
                if (arr[i][j] == 'R')
                {
                    if (i - min_row < 1 || j - min_col < 1)
                    {
                        check = 1;
                        break;
                    }
                }
            }
        }
        if (check)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}