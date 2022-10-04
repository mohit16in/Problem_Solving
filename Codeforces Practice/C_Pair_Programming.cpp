#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define inf 1e18
#define ll long long
#define pb push_back
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define vi vector<int>
#define pii pair<int, int>
#define mii map<int, int>
#define mci map<char, int>
#define mp make_pair

int main()
{
    w(t)
    {
        int k, n, m;
        cin >> k >> n >> m;
        // cout << k << " " << n << " " << " "  << m << endl;
        int mono[n], poly[m];
        for (int i = 0; i < n; ++i)
            cin >> mono[i];
        for (int i = 0; i < m; ++i)
            cin >> poly[i];
        vi v;
        // cout << v[0] << endl;
        int i = 0, j = 0;
        bool flag = 0;
        while (i < n && j < m)
        {
            if (mono[i] == 0)
            {
                v.pb(mono[i]);
                i++;
                k++;
            }
            else if (poly[j] == 0)
            {
                v.pb(poly[j]);
                j++;
                k++;
            }
            else if (mono[i] <= k)
            {
                v.pb(mono[i]);
                i++;
            }
            else if (poly[j] <= k)
            {
                v.pb(poly[j]);
                j++;
            }
            else
            {
                cout << -1;
                flag = 1;
                break;
            }
        }
        while (i < n && flag != 1)
        {
            if (mono[i] <= k)
            {
                v.pb(mono[i]);
                if (mono[i] == 0)
                    k++;
                i++;
            }
            else
            {
                cout << -1;
                flag = 1;
                break;
            }
        }
        while (flag != 1 && j < m)
        {
            if (poly[j] <= k)
            {
                v.pb(poly[j]);
                if (poly[j] == 0)
                    k++;
                j++;
            }
            else
            {
                cout << -1;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            for (int i = 0; i < (n + m); ++i)
            {
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }
}