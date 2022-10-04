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
    int n;
    cin >> n;
    if(n%2==0)  //need to distribute such that both of them get even part to eat no matter more or less in quantity.
    {
        if(n!=2)    //odd number can not be divided into even parts
        {
            cout << "YES" << endl;      //after checking the parity of number the only exception remains is 2 divided into 1 and 1
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" <<endl;
    }
    
}