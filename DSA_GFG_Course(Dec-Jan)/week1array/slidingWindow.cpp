//Problem: Sliding Window Technique
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n=5;
    int arr[n] = {6, 3, 3, 23, 5};
    int k = 2;
    int i=0, j=0;
    int temp_sum=0, mx_sum=0;
    while (j<n)
    {
        temp_sum += arr[j];
        if(j-i+1 != k)
            j++;
        else 
        {
            mx_sum = max(mx_sum, temp_sum);
            j++;
            temp_sum -= arr[i];
            i++;
        }
    }
    cout << mx_sum;
}