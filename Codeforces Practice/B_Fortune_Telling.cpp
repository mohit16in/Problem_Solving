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
        ll n, x, y;
        cin >> n >> x >> y;
        ll arr[n];
        ll sum=0;
        for(int i=0; i<n; ++i)  //even + even = even    and     even^even = even
        {                       //even + odd = odd      and     even^odd = odd
            cin >> arr[i];      //odd + odd = even      and     odd^odd = even
            sum += arr[i];      //odd + even = odd      and     odd^even = odd
        }
        if((x+sum)%2==y%2)      //so need to check whether (sum + x) and y is even or odd and if they comes out be of same parity
        {                       //then Alice will be the answer
            cout << "Alice\n";  //ex- x = even, implies x+3 = odd. Now check the parity of y and print same parity answer
        }
        else
        {
            cout << "Bob\n";
        }
    }
    

}