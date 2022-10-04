//Problem: Rearrange an array with O(1) extra space      (medium level)
//based on formula (tricky)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n=5;
	int arr[n]={4,0,2,1,3};     //basically, we will add value at index 4 multiplied by n to arr[0] and so on for other elements. 
	for (int i=0; i<n; ++i)     //modulo of that value will give original value stored at that index and dividing it with n will give the value to be stored 
	{
		arr[i] = arr[i] + ((arr[arr[i]]%n)*n);          // modulo is required because we are modifying the array itself.
	}
	for (int i=0; i<n; ++i)
	{
		cout << arr[i] / n << " ";
	}
}
/*
n=5
(4 + (3 % 5)*5)   ~   (0 + (19 % 5)*5)   ~   (2 + (2 % 5)*5)   ~   (1 + (20 % 5)*5)   ~   (3 + (1 % 5)*5)
       19         ~          20          ~          12         ~          1           ~          8
     (19/5)       ~        (20/5)        ~        (12/5)       ~        (1/5)         ~        (8/5)
        3         ~           4          ~           2         ~          0           ~          1 
*/