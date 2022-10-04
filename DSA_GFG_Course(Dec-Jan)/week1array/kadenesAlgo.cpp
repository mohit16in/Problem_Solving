//Problem: Kadane's Algorithm (medium level,, must do questiion)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n=5;
	int arr[n]={-4,-2,-3,-1,-5};
	// int sum=arr[0];
	// int current_max=arr[0];
	// for (int i=0; i<n; ++i)
	// {
	// 	// sum=0;
	// 	current_max = max(arr[i], (current_max+arr[i]));
	// 	sum = max(current_max, sum);
	// }
	int overall_best=arr[0];    //basically, we keep the track of sum in current_best. We will add both positive and negative elements to current_best and keep 
	int current_best=arr[0];    //comparing it with overall_best and updating it. We keep on adding negative elements to current_best in hope of getting huge
	for (int i=1; i<n; ++i)     //positive no. that will make it overall positive. As soon as current_best becomes negative we forget the older current_best
	{                           //and starts with the fresh positive no. and compare its sum with the overall_max whether it creates new overall_best and update.
		if(current_best>=0)
		{
			current_best += arr[i];
		}
		else
		{
			current_best = arr[i];
		}
		if(current_best > overall_best)
		{
			overall_best = current_best;
		}
	}
	cout << overall_best;
}
