//Problem: Subarray with given Sum
//A sum is given to you and you need to find a range of subarray whose sum exactly matches with the given sum.
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;                      //size of array
    long long S;                //given sum in question 
    cin >> n >> S;
    int arr[n];
    for (int i=0; i<n; ++i)
        cin >> arr[i];          //input of values in array
    int i=0, j=0;               //variable to point to the index
    long long sum=0;            //variable sum (for subarray)

    //The logic is:
    //I'll keep on adding elements to the sum until it becomes equal or greater than S. (moving ahead with the help of 'i')
    //If it will become equal to S then would return value of j and i respectively
    //Else if it becomes greater than S then I will deduct elements from sum with the help of j, until it becomes less than or equal to S.
    //If it becomes less than S then i will again continue to add the elements.
    //Will repeat the above steps until find the range of subarray 
    //**While adding elements - increment i and make j stand still and vive versa**
    
    while(i<=n)
    {
        if(sum<S)   
        {
            sum += arr[i++];    //post increment of i
        }
        else if(sum == S)
        {
            cout << j+1 << " " << i;
            // cout << arr[j+1] << " " << arr[i];
            break;
        }
        if(sum>S)
        {
            sum -= arr[j++];  //post increment of j
        }
        // cout << sum << endl;
    }
    // cout <<endl <<  sum; 
}