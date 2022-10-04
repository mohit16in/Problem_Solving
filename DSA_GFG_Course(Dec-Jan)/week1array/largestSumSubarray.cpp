//Problem: Largest Sum Subarray         //nice question (faced difficulty while solving kadane's algorithm. at last saw the answer)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int current_element_sum = 0;
    int max_sum = arr[0];
    for (int i=0; i<n; ++i)
    {
        current_element_sum = max(arr[i], (current_element_sum + arr[i]));
        max_sum = max(max_sum, current_element_sum);
    }
    cout << max_sum;
}

// int main ()
// {
//     int n=7;
//     int arr[n] = {-2, -3, 4, 1, -2, 1, -3};         //THIS IS WRONG APPROACH  (WILL LEAD TO FAILURE IN MANY TEST CASES)
//     int sum=0, mx=0;                        
//     for (int i=0; i<n; ++i)
//     {
//         sum += arr[i];
//         mx = max(sum, mx);          // we will update the max sum till so far
//         if(sum<0)                   // if sum < 0, we will not get the max by adding positive value to negative. 
//         {                           // eg: {-2, 5}: max is 5. But if we add -2 and 5 we will get 3 
//             sum = 0;
//         }
//     }
//     cout << mx;
// }