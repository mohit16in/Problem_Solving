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
        ll n, k;            //need to print the number of unique strings produced after k operations
        cin >> n >> k;      //if given string is palindrome then applying any of the two given operations(s+rev(s) or rev(s)+s)
        string s;           //will give us same result
        cin >> s;           //if given string is not palindrome then initially it will given us two different strings after 
        string temp = s;    //applying both the operations
        reverse(s.begin(), s.end());

        /*for example s = aba
        then after applying both the operations on it, it will give us same result
        s+rev(s) = abaaba (which is again palindrome) 
        rev(s)+s = abaaba (which is again palindrome)

        say s = aab
        then after applying both the operations on it, it will give us different result
        s+rev(s) = aabbaa (whcih results in palindrome now)
        rev(s)+s = baaaab (which results in palindrome now but got different results)
        */
       
        if(k==0)
        {
            cout << "1" << endl;            
        }
        else if(k==1)
        {
            if(temp==s)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "2" << endl;
            }
        }
        else if(k>1)
        {
            if(temp==s)
            {
                cout << 1 << endl;
            }
            else
            cout << 2 << endl;
        }
    }
}