//Problem: Validate an IP Address (passed 87/89 test cases)
// (falied test case = a.b.c.d)
//all the test cases passed when added - isdigit() function to the code
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	string temp;
	int count = 0;
	bool flag = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] != '.' || i == s.size() - 1)
			temp.push_back(s[i]);

		
		if (s[i] == '.' || i == s.size() - 1)
		{
			count++;
			if (temp.size() == 0)
			{
				flag = 1;
				break;
			}
			if (temp.size() > 1 && temp[0] == '0')
			{
				flag = 1;
				break;
			}
			for(auto it : temp)
			{
				if(!isdigit(it))
				{
					flag = 1;
					break;
				}
			}


			int x = 0;
			for (int i = 0; i < temp.length(); i++)
				x = x * 10 + temp[i] - '0';


			if (x > 255 || x < 0)
			{
				flag = 1;
				break;
			}
			temp = "";
		}

		if (flag == 1)
			break;
			
	}
	if (flag == 1 || count != 4)
		cout << 0;
	else
		cout << 1;
}
