// Problem - Binary Search
#include <iostream>
using namespace std;
int main ()
{
    int arr[] = {1,2,41,6,8,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<n-1; ++i)            //sorting of the array with Time Com. = O(n^2)
    {
        for (int j=i+1; j<n; ++j)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    int k = 5, l=0, r = 7;
    while (l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid] == k)
        {   
            cout << mid;
            break;
        }
        else if (arr[mid]>k)
        {
            r = mid-1;
        }
        else 
        {
            l = mid+1;
        }
    }
}
