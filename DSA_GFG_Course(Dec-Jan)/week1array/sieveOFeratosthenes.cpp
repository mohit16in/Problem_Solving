//Problem: Implementation of Sieve of Eratoshenes 
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;  
    int arr[n+1] = {0};           // Space Complexity -- O(n)
    
    for (int i=2; i<=n/2; ++i)      // move till sqrt(n)
    {
        if(arr[i]==0)
        {
            for (int j=i*i; j<=n; j=j+i)
            {
                arr[j] = 1;             // mark all non - primes as '1'
            }
        }
    }
    for (int i=2; i<=n; ++i)
    {
        if(arr[i]==0)
        {
            cout << i << " ";           // cout index of the array => prime numbers
        }
    }
}
