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


// string(4, s[0]);  --->  This returns a string having 4 s[0]`s (i.e., say s = tour then output will be "tttt")
//a better approach is solved below

int main ()
{
	string s;
	cin >> s;
	int size = s.size();
	string result;
	for(int i=0; i<size; ++i)
	{
		int val = int(s[i]);
		if(val==65 || val==69 || val==73 || val==79 || val==85 || val==89 || val==97 || val==101 || val==105 || val==111 || val==117 || val==121)
		{
			continue;	//could have used the logic stated below
		}
		else	
		{
			if(val<97)
			{
				result.append(".");
				// string str = char(val+32);
				result += char(val+32);
			}
			else
			{
				result.append(".");
				// string str = s[i];
				result += s[i];		
			}
		}
	}	
	cout << result << endl;
	
}


// int main ()
// {
//     string s;
//     cin >> s;
//     int size = s.size();
//     for(int i=0; i<size; ++i)
//     {
//         if(s[i]>='A' && s[i]<='Z')
//         {
//             s[i] = s[i] - 'A' + 'a';
//         } 
//         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
//         {
//             continue;
//         }
//         else
//         {
//             cout << "." << s[i];
//         }
//     }       
// }
