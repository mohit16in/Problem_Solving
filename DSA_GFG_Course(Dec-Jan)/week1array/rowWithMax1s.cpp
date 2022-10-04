//Problem: Row with max 1s (Nice Approach)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n, m;           //n=ROW and m=COLUMN
	cin >> n >> m;
	int arr[n][m];
	for (int i=0; i<m; ++i)
	{
		for (int j=0; j<n; ++j)
			cin >> arr[i][j];       //Input till here
	}
	int j=m-1, ans=0;
	for (int i=0; i<n; ++i)         //Start from rightmost corner and traverse in left direction until we encounter 0
	{                               //then will step down and check whether it has more number of 1's and keep on updating the result.
		while (j>=0 && arr[i][j]==1)
		{
			ans=i;
			j--;
		}
	}
	if(ans==0 && arr[0][m-1]==0)
	{
		cout << -1;
		return 0;
	}
	cout << ans;
	
}
