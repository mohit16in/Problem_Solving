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
#define mp make_pair

//stored sorted order of even first in decreasing order and then sorted order of odd in increasing order
//and then checked if (__gcd(temp[i], 2*temp[j])>1) or not

int main()
{
    w(t)
    {
        int n;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        int count = 0;

        vi even;
        vi odd;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] & 1)
                odd.pb(v[i]);
            else
                even.pb(v[i]);
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        vi temp;
        for (int i = even.size() - 1; i >= 0; --i)
        {
            temp.pb(even[i]);
        }
        for (int i = odd.size() - 1; i >= 0; --i)
            temp.pb(odd[i]);

        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int t = 2 * temp[j];
                if ((__gcd(temp[i], t)) > 1)
                    count++;
            }
        }
        cout << count << endl;
    }
}