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
#define uset unordered_set
#define setBits(n) __builtin_popcount(n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)

int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    long long sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    bool flag = 0;
    int hold = -1;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int i, ele;
            cin >> i >> ele;
            if(flag && arr[i-1]==hold)
            {
                sum += ele - hold;
                arr[i-1] = ele;
                cout << sum << endl;
            }
            else
            {
                sum += ele - arr[i - 1];
                arr[i - 1] = ele;    
                cout << sum << endl;
            }
            
        }
        else
        {
            int ele;
            cin >> ele;
            // fill(arr, arr + n, ele);
            sum = ele * n;
            cout << sum << endl;
            flag = 1;
            hold = ele;
        }
    }
}