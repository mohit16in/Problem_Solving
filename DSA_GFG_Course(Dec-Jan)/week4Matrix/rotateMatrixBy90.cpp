//Problem: Roatate matrix by 90 degree (a bit logical.. i had seen the solution beforehand only that's why i was able to solve it in one go!!)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	vector<vector<int> > mat;
	for (int i=0; i<n; ++i)
	{
		vector<int> temp;
		for (int j=0; j<n; ++j)
		{
			int x;
			cin >> x;
			temp.push_back(x);
		}
		mat.push_back(temp);			// input of matrix till here
	}									

    for (int i=0; i<n/2; ++i)			// this will take care of the number of complete cycles
    {
    	for(int j=i; j<n-i-1; ++j)			//	mistake i did was: j=0 instead of j=i
    	{
    		int temp = mat[i][j];			//all you need to take care of is that what is constant in particular traversal (row or column). 
    		mat[i][j] = mat[j][n-i-1];			//	first set that and then move on and think of next index.
    		mat[j][n-i-1] = mat[n-i-1][n-1-j];		// this looks complex but it is easy.
    		mat[n-1-i][n-1-j] = mat[n-1-j][i];
    		mat[n-1-j][i] = temp;
    	}
    }

	for (int i=0; i<n; ++i)
	{
		for (int j=0; j<n; ++j)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}
