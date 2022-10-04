//Problem: Insertion Sort (Time Complexity: O(n^2), best case: O(n))
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n=6;
	int arr[n] = {1,3,2,6,4,5};		//insertion sort: we select the first element from unsorted array and put it in its correct place in sorted array
	for (int i=1; i<n; ++i)
	{
		int temp = arr[i];
		int j=i-1;
        /*
        while(arr[j]>temp && j>=0)
        { 
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        */
		while (arr[j]>arr[j+1] && j>=0)
		{
			arr[j+1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
	// for(int i=1; i<n; ++i)
	// {
	// 	int temp = arr[i];
	// 	for(int j=i-1; j>=0; --j)
	// 	{
	// 		if(arr[j]>temp)
	// 		{
	// 			arr[j+1] = arr[j];
	// 			arr[j] = temp;
	// 		}
	// 		else 
	// 			break;
	// 	}
	// }
	// for(int i=0; i<n; ++i)
	// 	cout << arr[i] << " ";
	// }
	for (int i=0; i<n; i++)
	{
		cout <<arr[i] << " ";
	}
}