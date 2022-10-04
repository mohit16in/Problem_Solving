//Problem: Find the square root of the given input number.
#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;                             // input 

    int i=0, j=n;
    while (i<=j)
    {
        int mid = (i+j)/2;
        if(mid*mid == n) break;
        else if ((mid*mid) > n)         //applying binary search to solve it.  
        {
            j = mid-1;                  //getting the integer value whose square root is either equal or just less than 'n'
        }
        else
        {
            i = mid+1;
        }
    }
    
    float num = j;
    for (; ;)
    {
        num = num + 0.1;                //adding a bit of precession to the value.
        if (num*num > n)
        {
            num = num - 0.1;
            break;
        }
    }
    cout << num;
}
