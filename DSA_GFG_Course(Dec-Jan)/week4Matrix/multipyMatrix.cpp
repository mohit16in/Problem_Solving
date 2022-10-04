//Problem: Multiplication of a matrix
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int r1, c1;
	cin >> r1 >> c1;
	int arr[r1][c1];
	for (int i = 0; i < r1; ++i)
	{
		for (int j = 0; j < c1; ++j)
			cin >> arr[i][j];
	} 										// input of matrix A

	int r2, c2;
	cin >> r2 >> c2;
	int brr[r2][c2];
	for (int i = 0; i < r2; ++i)
	{
		for (int j = 0; j < c2; ++j)
			cin >> brr[i][j];
	} 										// input of matrix B

	int result[r1][c2];
	for (int i = 0; i < r1; ++i)			// targetting a particular row of matrix A in every iteration
	{
		for (int j = 0; j < c2; ++j) 		// help us to traverse in the column of B
		{
			int value = 0;
			for (int k = 0; k < c1; ++k) 	// this is c1 == r2 traversal
			{
				value += arr[i][k] * brr[k][j]; 	// give it a look
			}
			cout << value << " ";
		}
		cout << endl;
	}
}