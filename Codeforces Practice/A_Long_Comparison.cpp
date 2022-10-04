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

//very nice question 
//*******************too good ******************

int main()
{
    w(t)
    {
        ll x, p;
        cin >> x >> p;
        cin.ignore();
        ll y, q;
        cin >> y >> q;
        long long result = 0;
        long long answer = 0;
        int mn = min(p, q);     //after deducing minimum out of both either of p or q will become zero or both
        p -= mn;
        q -= mn;
        if (p >= 7)             //if any of them is 7 or greater that means for whatever value of x, y
            cout << ">" << endl;    //it can't have greater value then the one having p/q == 7
        else if (q >= 7)
            cout << "<" << endl;
        else
        {
            result = x * ceil(pow(10, p));  // else if value of p or q is less than 7 then multiply it & compare
            answer = y * ceil(pow(10, q));
            if (result > answer)
                cout << ">" << endl;
            else if (result == answer)
                cout << "=" << endl;
            else
                cout << "<" << endl;
        }
    }
}