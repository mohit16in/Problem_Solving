// Problem - rotation in arrays -- (Method - 1)
#include <iostream>
using namespace std;

int main ()
{
    int arr[5] = {1,2,3,4,5};
    int d=2;                          // input till here 
    while(d--)
    {
        int temp = arr[0];            // time complexity = O(n*d)  --- not a feasible approach
        for (int i=1; i<5; ++i)       
        {
            arr[i-1] = arr[i];
        }
        arr[4] = temp;
    }

    for (int i=0; i<5; ++i)
    {
        cout << arr[i] << " ";
    }
}
// another method can be that we can copy the first two elements to another array and shift rest other forward by 2 step and then copy back the elements at the last.

------------------------------------------------------------------------------------------------------------------------------------------------------

// Problem - rotation in arrays -- (Method - 2)
#include <iostream>
using namespace std;

int arr[5] = {1,2,3,4,5};

void rev_array (int s, int e)
{
    while (s<e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++; e--;                   // time complexity = O(n)  --- suitable to rotate the array in comparision to the other two
    }
}

int main ()
{
    int d=2, n=5;

    rev_array(0, d-1);
    rev_array(d, n-1);
    rev_array(0, n-1);

    for (int i=0; i<5; ++i)
    {
        cout << arr[i] << " ";
    }
}
