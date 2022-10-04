//Problem: Find frequency of the number in the given sorted array.
#include <iostream>
using namespace std;
//                               we could have done this problem by first searching the starting index of k and then again searching the last index of k
int main ()
{
    int arr[8] = {3, 3, 3, 5, 5, 5, 5, 5};     //sorted array
    int i=0, j=8, k=5, mid=0;
    while (i<=j)                                //applying binary search to find out the index of any random k=5(in this case)
    {
        mid = (i+j)/2;
        if(arr[mid]==k)
        {
            break;
        }
        else if (arr[mid]>k)
        {
            j = mid-1;
        }
        else 
            i = mid+1;
    }   
    if(arr[mid]!=k)                           //if k=5 is not present it the given array
    {
        cout << 0;
        return 0;
    }
    int temp = mid;
    int m=mid, n=mid;
    while(arr[m]==k || arr[n]==k)           //moving left and right to count the frequency of 'k'
    {
        if(arr[m]==k)                       // or we could have maintained a count variable.
        {
            m--;
            mid++;
        }
        if(arr[n]==k)
        {
            n++;
            mid++;
        }
    }
    cout << mid - temp -1;
}
