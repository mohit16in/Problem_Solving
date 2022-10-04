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

//it was asked to make goodness_score exactly equal to k 
//even if it is greater then reduce it else increase it by applying operations

int main()
{
    w(t)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        string s;
        cin >> s;
        int goodness_score = 0;
        for (int i = 0; i < n / 2; ++i)
        {
            if (s[i] != s[n - i - 1])
                goodness_score++;
        }
        if (goodness_score < k)
            cout << k - goodness_score << endl;
        else if (goodness_score == k)
            cout << 0 << endl;
        else
            cout << goodness_score - k << endl;
    }
}