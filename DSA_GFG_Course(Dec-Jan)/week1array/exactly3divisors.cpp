//Problem: Exactly 3 Divisors  (This was nice question)
//3 divisors => 1, number itself, any prime factor
//if we want single divisor other than 1 and number itself then it can only be a prime. (eg: 4, 9, 25, 49, 121, 169 ..)
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if(x==2 || x==3)
    {
        return 1;
    }
    for (int i=2; i<=sqrt(x); ++i)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main ()
{
    int N;
    cin >> N;
    int count = 0;
    for (int i=2; i*i<=N; ++i)      //checked if it prime and square of that prime is less than N
    {
        if (isPrime(i))
        {
            count++;                //if the above considtion is true than incremented count
        }
    }
    cout << count;
    return 0;
}