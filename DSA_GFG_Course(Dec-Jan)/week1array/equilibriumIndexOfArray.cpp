//Problem: Equilibrium Index of the array   (Time Coomplexity: O(n), Space Complexity: O(n))
#include <bits/stdc++.h>
using namespace std;

int main ()                             //this is a bit hard compared to the below (alternative code) code, if you understand the below one properly
{
    int n = 7;
    int arr[n];

    //Actual Array: -7  1   5   2   -4  3   0
    //Fwd_Sum     : -7  -6  -1  1   -3  0   0
    //Bwd_Sum     : 0   7   6   1   -1  3   0

    for (int i=0; i<n; ++i)
        cin >> arr[i];

    //Creating an extra array for storing backward sum
    int bwd_sum[n];
    bwd_sum[0]=arr[n-1];
    for (int i=1; i<n; ++i)
        bwd_sum[i] = arr[n-1-i]+bwd_sum[i-1];

    // Implementing fwd sum on arr only
    for (int i=1; i<n; ++i)
        arr[i] += arr[i-1];

    // Checking if fwd_Sum == bwd_Sum 
    for (int i=0; i<n; ++i)
    {
        if(arr[i]==bwd_sum[n-i-1])
        {
            cout << "The Index is = ";
            cout << i;
            break;
        }
    }
}





// alternate of the above problem in O(n) Time Complexity and O(1) Space Complexity
// a bit tricky
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    //Actual Array: -7  1   5   2   -4  3   0
    int n = 7, sum=0;
    long long arr[n];
    for (int i=0; i<n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int left_sum=0;
    for (int i=n-1; i>=0; --i)
    {
        sum -= arr[i];          // this will give you the right sum

        if(sum==left_sum)
        {
            cout << i;
            break;
        }
        left_sum += arr[i];
    }    
}