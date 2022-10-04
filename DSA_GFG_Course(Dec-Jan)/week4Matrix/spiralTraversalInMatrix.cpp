//Problem: Spiral Traversal in matrix
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int r, c;
	cin >> r >> c;
	vector<vector<int> > matrix;
	for (int i=0; i<r; ++i)
	{
		vector<int> temp;
		for(int j=0; j<c; ++j)
		{
			int x;
			cin >> x;
			temp.push_back(x);
		}
		matrix.push_back(temp);
	}												//	input till here

	// for (int i=0; i<r; ++i)
	// {
	// 	for (int j=0; j<c; ++j)
	// 	{
	// 		cout << matrix[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	vector<int> spiral;
	int top=0, bottom=r-1, left=0, right=c-1;		// these are some variables that point on all possiblities and we modify these to find appropriate operation
	int dir=0;										// concept of dir is good
	while(top<=bottom && left<=right)
	{
		if(dir==0)
		{
			for(int i=left; i<=right; ++i)
			{
				spiral.push_back(matrix[top][i]);	// take care of what is constant and which variable points on that constant part.
			}
			top++;
		}

		else if (dir==1)
		{
			for (int i=top; i<=bottom; ++i)
			{
				spiral.push_back(matrix[i][right]);
			}
			right--;
		}

		else if(dir==2)
		{
			for(int i=right; i>=left; --i)
			{
				spiral.push_back(matrix[bottom][i]);
			}
			bottom--;
		}

		else if(dir==3)
		{
			for(int i=bottom; i>=top; --i)
			{
				spiral.push_back(matrix[i][left]);
			}
			left++;
		}

		dir = (dir+1)%4;
	}
	// cout << "the end";
	for (auto element : spiral)
	{
		cout << element << " " ;
	}
}