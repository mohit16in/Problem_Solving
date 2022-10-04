//Problem: Maximum Rectangle Area in a Histogram
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    long long nsr[n], nsl[n];
    stack<long long> sr;
    for (int i = 0; i < n; ++i)
    {
        while (!sr.empty() && arr[i] < arr[sr.top()])
        {
            nsr[sr.top()] = i;
            sr.pop();
        }
        sr.push(i);
    }
    while (!sr.empty())
    {
        nsr[sr.top()] = n;
        sr.pop();
    }
    for (int i = n - 1; i >= 0; --i)
    {
        while (!sr.empty() && arr[i] < arr[sr.top()])
        {
            nsl[sr.top()] = i;
            sr.pop();
        }
        sr.push(i);
    }
    while (!sr.empty())
    {
        nsl[sr.top()] = -1;
        sr.pop();
    }

    // for (long long i = 0; i < n; ++i)
    // {
    //     cout << nsr[i] << " ";
    // }
    // cout << endl;
    // for (long long i = 0; i < n; ++i)
    // {
    //     cout << nsl[i] << " ";
    // }
    int mx = 0;
    for (int i = 0; i < n; ++i)
    {
        int temp = arr[i] * (nsr[i] - nsl[i] - 1);
        mx = max(mx, temp);
    }
    cout << mx;
}