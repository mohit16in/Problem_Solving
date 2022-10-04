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

int main()
{
    w(t)
    {
        int n;
        cin >> n;
        int arr[n];
        // int temp[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        int start = -1;
        int end = -1;
        for (int i = 0; i < n - 1; ++i)
        {
            if (arr[i] > arr[i + 1])
            {
                start = i;
                break;
            }
        }
        for (int i = n - 1; i > 0; --i)
        {
            if (arr[i] < arr[i - 1])
            {
                end = i;
                break;
            }
        }
        reverse(arr + start, arr + end + 1);
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}