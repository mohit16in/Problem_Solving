#include <bits/stdc++.h>
using namespace std;


#define mod                 1000000007
#define inf                 1e18
#define ll                  long long
#define pb                  push_back
#define w(t)                int t; cin >> t; while(t--)
#define vi                  vector<int>
#define pii                 pair<int, int>
#define mii                 map<int, int>
#define mci                 map<char, int>
#define mp                  make_pair


int main ()
{
    w(t)
    {
        string s;
        cin >> s;
        int size = s.size();
        int between_size = size - 2;
        if(size>10)
        {
        	// string in_between = to_string(between_size);
        	// string result = s[0] + in_between + s[size-1];
            // cout << result << endl;
        	cout << s[0] << between_size << s[size-1] << endl;
        }
        else
        	cout << s << endl;
    }
}

/*
initially, i converted the between_size to string and then made an append and then finally made a cout statement.
but all this wasn't needed. 
what matters is the output matching.

so atlast, just printed the [first letter], [the length between the first and last lettter] and [last letter].
*/