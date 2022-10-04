//Problem: Minimum swaps to sort (medium level)
// Time and space complexity: O(n log n ) and O(n)
// i was able to solve it in O(n^2) -- kind of bubble sort 

#include <bits/stdc++.h>

int min_element(vector<int> v, int start, int end)
{
	int min_index = inf;
	int min_element = v[start];
	for (int i = start; i < end; ++i)
	{
		if (v[i] <= min_element)
		{
			min_element = v[i];
			min_index = i;
		}
	}
	return min_index;
}

int main()
{
	// minimum number swaps to sort the given array.
	//  int arr[] = {2, 8, 5, 4};
	//  int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> nums;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		nums.push_back(x);
	}
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		int idx = min_element(nums, i, n);
		if (idx == i)
		{
			continue;
		}
		else
		{
			swap(nums[i], nums[idx]);
			count++;
		}
	}
	cout << count << endl;
}




//Problem : Minimum Swaps
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i]; // input till here

	vector<pair<int, int>> v; // will store original arrangement (data and it's index)
	for (int i = 0; i < n; ++i)
		v.push_back({arr[i], i});

	sort(v.begin(), v.end()); // sort it in O(log(n))

	int swaps = 0;
	for (int i = 0; i < n; ++i) // will arrange it in the original for(given in the question)
	{
		if (v[i].second != i) // if the index stored is same as i, that means it was already in correct position
		{
			swaps++;
			swap(v[i], v[v[i].second]);
			i--; // the element present at i is send to its correct position as per original array provided
		}		 // and to take care of the other swapped element we did i--
	}
	cout << swaps;
}