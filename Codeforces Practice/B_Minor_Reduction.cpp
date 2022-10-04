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
        string s;
        cin >> s;
        int n = s.size();
        int max_sum = 0;

        int start_sum = 0;
        int first = s[0] - '0';
        int second = s[1] - '0';
        start_sum = first + second;

        int i = n - 1;
        bool flag = 0;
        for (; i > 0; --i)
        {
            int a = s[i] - '0';
            int b = s[i - 1] - '0';
            if ((a + b) > 9)
            {
                max_sum = a + b;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            string part1 = s.substr(0, i - 1);
            string part2 = s.substr(i + 1, n - 1);
            cout << part1 << max_sum << part2;
        }
        else
        {
            string part3 = s.substr(2, n - 1);
            cout << start_sum << part3;
        }
        cout << endl;
    }
}