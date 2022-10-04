//Problem: Range Sum Queries using Prefix Sum
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int arr[5] = {4, 5, 3, 2, 5};
    int t = 3;
    for (int i=1; i<5; ++i)
    {
        arr[i] += arr[i-1];         //Prefix Sum
    }
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if(a==0)
        {
            cout << arr[b]<< endl;
        }
        else
        {
            cout << arr[b] - arr[a-1] << endl;      //Formula
        }
    }
}