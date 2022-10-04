//Problem: Based on Prefix Sum (Tricky)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;                                  // n = 5, t = 3 
    cin >> n;                               // a = 2, b = 4
    int arr[n] = {0, 0, 0, 0, 0};           // a = 1, b = 3    
    int t;                                  // a = 1, b = 2         we need to add 100 from a to b in every iteration
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        arr[a-1] += 100;
        arr[b] -= 100;
    }
    for (int i=1; i<n; ++i)
    {
        arr[i] += arr[i-1];
    }
    for (int i=0; i<n; ++i)
    {
        cout << arr[i] << " ";
    }
}