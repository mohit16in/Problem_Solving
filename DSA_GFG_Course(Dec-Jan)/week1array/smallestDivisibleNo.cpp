//Problem: Smallest Divisible Number   (find a smallest number that is evenly divisible by numbers 1 to 'n')    (Took around 1 hour and expected was 15 min)
//Learnt a new formula to calculate the lcm of two number using product of those number and gcd of those number.
//Formula:
//      lcm(a,b) = (a*b) / (__gcd(a,b));
//  or,  a * b   = lcm(a*b) * hcf(a,b);

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long n = 1;
    if(n==1)
    {
        cout << "1";
        return 0;
    }
    long long lcm;
    lcm = (n*(n-1)/(__gcd(n, n-1)));
    for (long long i=n-1; i>2; --i)
    {
        lcm = (lcm*(i-1))/(__gcd(lcm, i-1));
    }
    cout << lcm;
    return 0;
}