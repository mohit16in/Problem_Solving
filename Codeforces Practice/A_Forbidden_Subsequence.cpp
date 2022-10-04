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
		string s, t;
		cin >> s >> t;
		mci m;
		for(int i=0; i<s.size(); ++i)
		{
			m[s[i]]++;
		}
		auto ita = m.find('a');
		auto itb = m.find('b');
		auto itc = m.find('c');
		if(ita==m.end() || itb==m.end() || itc==m.end())
		{
			sort(s.begin(), s.end());
			cout << s;
		}
		else
		{
			sort(s.begin(), s.end());
			if(t=="abc")
			{
				auto ita = m.find('a');
				cout << string(m['a'], 'a');
				auto itc = m.find('c');
				cout << string(m['c'], 'c');
				auto itb = m.find('b');
				cout << string(m['b'], 'b');
				for(int i=0; i<s.size(); ++i)
				{
					if(s[i]=='a' || s[i]=='b' || s[i]=='c')
						continue;
					else
						cout << s[i];
				}
			}
			else
				cout << s;

		}
		cout << "\n";
	}
}