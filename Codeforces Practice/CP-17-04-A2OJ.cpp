//Problem: 2: A Beautiful Matrix
#include <bits/stdc++.h>
using namespace std;
int main ()  
{ 
        int arr[5][5]; 
        int x, z;
        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j<5; ++j)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 1)
                {
                    x= i; z= j; //location of '1'
                }
            }
        } // till here I have taken the input only
        int a, b;
        if ((2-x) < 0) // the mid location is arr[2][2]
        a = -(2-x);
        else 
        a = (2-x);     // just minus the location of '1' with the with middle location you will get the no of steps 
        if ((2-z) < 0)
        b = -(2-z);
        else
        b = (2-z);

        cout << a+b;
return 0; 
}
--------------------------------------
//Problem: 3: Queue at the school
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, t; // n = no of students & t = time after which we need to find the arrangement
    cin >> n >> t;
    char arr[n];
    for (int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }
    while(t--)
    {
        for (int j=0; j<n; ++j)
        {
            if (arr[j] == 'B' && arr[j+1] == 'G')
            {
                arr[j] = 'G';
                arr[j+1] = 'B';
                ++j; // so that it do not check for the j consecutively... say condition is correct for j=1 so after this it 
                     // will check for j=3 because at j=2 the swaped b will be present
            }
        }
    }
    for (int k = 0; k<n; ++k)
    {
        cout << arr[k];
    }
    return 0;
}
------------------------------------------
//Problem: 4: Borze (Weird problem:)
//Unable to get that why it automatically stoped taking input in codeforces compiler and it do not stop here in mine. 
//#solved = sublime        ?????? But logic was correct and got accepted after taking 3 hours............
#include <bits/stdc++.h>
using namespace std;
int main () 
{
    char arr[200];
    int i =0;
    while (cin >> arr[i])
    {
        ++i;
    }
    for (int j=0; j<i; ++j)
    {
        if (arr[j]=='-' && arr[j+1]=='.')
        {
            cout << "1";
            j++;
        }
        else if (arr[j]=='-' && arr[j+1]=='-')
        {
            cout << "2";
            j++;
        }
        else 
        cout << "0";
    }
return 0; 
}
---------------------------------------------
//Problem: 5: Beautiful year
//replaced the below portion and I was suprised to see that this worked after wasting half n' hour (Need: Time complexity topic)
// ld = year % 10; 
// year/=10;
// td = year % 10; 
// year/=10;
// sd = year % 10; 
// year/=10;
// fd = year % 10;
#include <bits/stdc++.h>
using namespace std;
int main () 
{
    int year, ld, td, sd, fd;
    cin>>year;   // 1000 <= year <=9000
    while (1)
    {
        year+=1;
        ld = year % 10;
        td = year/10%10;
        sd = year/100%10;
        fd = year/1000 %10; 
        if (ld!=td && ld!=sd && ld!=fd && td!=sd && td!=fd && sd!=fd)
        {
            break;
        }
    }
    cout << year;
return 0; 
}
-------------------------------------------------------------------------------
//Problem: 7: Word 
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char word[100];
    int i=0;
    while (cin >> word[i])
    {
        ++i;        
    }

    int capital = 0, small = 0;

    for (int j=0; j<i; ++j)
    {
        if ((int)word[j] <=90)
        {
            ++capital;
        }
        if ((int)word[j] >91)
        {
            ++small;
        }
        
    }
{
    
    if (small >= capital)
    {
        for (int j=0; j<=i; ++j)
        {
            if ((int)word[j] <=90)
            {
                word[j] = char {(int)word[j] + 32};
            }
        }
    }
    else if (capital > small)
    {
        for (int j=0; j<=i; ++j)
        {
            if ((int)word[j] >90)
            {
                word[j] = char {(int)word[j] - 32};
                
            }
        }
    }
}
    for (int p=0; p<i; ++p)
    {
    	cout << word[p];
    }
    return 0;
}
------------------------------------------------------------------------------------
//Problem: 8: Word Capitalization (easy - pissy just take a look at how I assigned int value to char) (little confusing)
// Since done char = int ; it's not wrong lower level data type automatically gets converted in int. we can do that
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char arr[1000];
    int i=0;
    while (cin >> arr[i])
    {
        ++i; 
    }
    int cap;
    // for (int j=0; j<i; ++j)s
    // {
        if ((int)arr[0] >91)
        {
            cap = (int)arr[0]-32;
            arr[0] = cap;         //arr[0] = (char)cap;   //since arr is of char type therefore, cap got autmatically converted into char type
        }
    // }
    for (int k=0; k<i; ++k)
    {
        cout << arr[k];
    }
    return 0;
}
-------------------------------------------------------------------------------------
//Problem: 9: Nearly Lucky Number (easy)
#include <iostream>
using namespace std;
int main ()
{
	long long int n;
	cin >> n;
	long long int num=0, x;
	for (long int j=0; n>0; ++j)
	{
		x = n%10;
		n/=10;
		if (x==4 || x==7)
		{
			++num;
		}
	}
	if (num == 4 || num==7)
	{
		cout << "YES";
	}
	else 
		cout << "NO";
	return 0;
}
-------------------------------------------------------------------------------------------
//Problem: 10: Stones On The Table (extremely easy)
#include <iostream>
using namespace std;
int main ()
{
	int stone;
	cin >> stone;
	char arr[50];
	int i=0;
	while (cin >> arr[i])
		++i;
	int remove=0;
	for (int j=0; j+1<i; ++j)
	{
		if (arr[j]==arr[j+1])
			++remove;
	}
	cout << remove;
	return 0;
}
---------------------------------------------------------------------------------------------------------------------------
//Problem: Bob and string (nice problem: done without any help: string + character + hashing problem)
//requires optimization bcoz time complexity is near O(10^10)
#include <bits/stdc++.h>
using namespace std;
const int N = 26;
int Stemp[N];
int Ttemp[N];
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    string S, T;
    cin >> S >> T;
    for (int i=0; i<S.size(); ++i)
    {
      Stemp[S[i] - 'a']++;
    }
    for (int i=0; i<T.size(); ++i)
    {
      Ttemp[T[i] - 'a']++;
    }
    int count=0;
    for (int i=0; i<26; ++i)
    {
      while (Ttemp[i]>Stemp[i])
      {
        ++count;
        --Ttemp[i];
      }
      while(Stemp[i]>Ttemp[i])
      {
        ++count;
        ++Ttemp[i];
      }
    }
    cout << count<<endl;
  }
}