//Problem: Finding whether number is Prime or not (time complexity O(n))
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int key = 2;
    bool flag = 0;

    for (int i=key/2; i>1; --i) 
    {
        if(key%i==0)
        {
            // cout << i << " " << 4%i << endl;
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        cout << "It is a Prime Number";
    }
    else 
    {
        cout << "Not a Prime Number";
    }
    return 0;
}
