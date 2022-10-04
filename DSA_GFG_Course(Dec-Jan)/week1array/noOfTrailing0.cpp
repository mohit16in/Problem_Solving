//Problem: Number of trailing zeroes (in factorial)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n=99, count=0;
    if(n<5)
    {
        cout << 0;
        return 0;
    }
    for (int i=5; n/i >= 1; i = 5*i)
    {
        count += n/i;
    }
    cout << count;
}
