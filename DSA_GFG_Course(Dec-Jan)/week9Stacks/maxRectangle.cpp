//Problem: Max Rectangle
#include <bits/stdc++.h>
using namespace std;


int MAH(vi arr)
{
    int n = arr.size();
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
    int mx = 0;
    for (int i = 0; i < n; ++i)
    {
        int temp = arr[i] * (nsr[i] - nsl[i] - 1);
        mx = max(mx, temp);
    }
    return mx;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int M[n][m];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> M[i][j];
        }
    }

    vi temp(m);
    for (int i = 0; i < m; ++i)
    {
        temp[i] = (M[0][i]);
    }
    int mx = MAH(temp);
    // cout << mx << endl;
    for (int i = 1; i < n; ++i)
    {
        vi v;
        for (int j = 0; j < m; ++j)
        {
            if (M[i][j] == 0)
                v.pb(0);
            else
                v.pb(M[i][j] + temp[j]);
        }
        temp.clear();
        mx = max(mx, MAH(v));
        temp = v;
    }
    cout << mx;
}