// Example: 5 - (Get Stair Paths)       uses different diagramatic approach 
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

//expec: to get all the paths to reach n from base stair (0) 
****we can take either 1 step, 2 step, 3 step at a time
//faith: it will give us all the paths to reach n-1, n-2, n-3 from base stair 

//to meet expec using faith we need to add 1 before the result of n-1, 2 before the result of n-2 and 3 before the result of n-3
************* also we need to take care of base case ...... an empty string ("") is different from blank string. *****************

vector<string> getStairPath(int n)
{
    if(n<0)                                             //if(n<0) implies the step you are going to take is not valid bcoz you can't come back to 0 after you step to n<0
    {
        vector<string> bres;
        // bres.pb("");
        return bres;
    }
    if(n==0)                                            //if n==0 implies the step is valid (it is possible to reach 0 from 0 like 2^0=1, so one way is possible from 0 to 0)
    {
        vector<string> bres;
        bres.pb("");
        return bres;
    }
    vector<string> n_1 = getStairPath(n-1);             //this will return all the paths to reach 0 from n-1, if you would take 1 step initally
    vector<string> n_2 = getStairPath(n-2);             //this will return all the paths to reach 0 from n-2, if you would take 2 step initally
    vector<string> n_3 = getStairPath(n-3);             //this will return all the paths to reach 0 from n-3, if you would take 3 step initally

    vector<string> result;
    for(string &pr : n_1)                               //n_1 will return all those paths from n-1 to 0 so you need to paste 1 (for 1 step) infront of result of n_1
        result.pb("1" + pr);
    for(string &pr : n_2)                               //n_2 will return all those paths from n-2 to 0 so you need to paste 2 (for 2 step) infront of result of n_2
        result.pb("2" + pr);
    for(string &pr : n_3)                               //n_3 will return all those paths from n-3 to 0 so you need to paste 3 (for 3 step) infront of result of n_3
        result.pb("3" + pr);
    return result;
}

int main ()
{
    int n;
    cin >> n;
    vector<string> v = getStairPath(n);          
    for(auto &pr : v)
        cout << pr << " ";
}
