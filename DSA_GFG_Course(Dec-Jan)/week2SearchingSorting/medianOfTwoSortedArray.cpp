//Problem: Median of two sorted arrays (hard) (need to do this in time comeplexity of O(log(max(n, m))))
//But was able to solve it in time complexity of O((n+m)log(n, m))

#include <bits/stdc++.h>

int main()
{
	// first merge two sorted arrays
	// then find the element according to the median calculated
	int n, m;
	cin >> n >> m;
	int arr[n], brr[m];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	for (int i = 0; i < m; ++i)
		cin >> brr[i];

	// sorting of array in their respective arrays only...
	int j = 0;
	while (j < n)
	{
		if (brr[0] < arr[j])
			swap(arr[j], brr[0]);
		j++;
		sort(brr, brr + m);
	}

	int median = 0;
	if ((n + m) % 2 != 0) // if the sum is odd
	{
		median = (n + m) / 2 + 1;
		if (median <= n)
		{
			cout << arr[median - 1];
		}
		else
		{
			int index = median - n;
			cout << brr[index - 1];
		}
	}
	else // if the sum is even...for even we need to find the average of two numbers.
	{
		int first_index = (n + m) / 2;
		int second_index = (n + m) / 2 + 1;
		int first_idx_value = 0;
		int second_idx_value = 0;
		if (first_index <= n)
		{
			first_idx_value = arr[first_index - 1];
		}
		else
			first_idx_value = brr[first_index - n - 1];
		if (second_index <= n)
		{
			second_idx_value = arr[second_index - 1];
		}
		else
		{
			second_idx_value = brr[second_index - n - 1];
		}
		cout << (first_idx_value + second_idx_value) / 2;
	}
}