//Problem: Modular Multiplicative Inverse

//MODULAR MULTIPLICATIVE INVERSE FOR A AND M -- (A*p) % M = 1
// ?? The multiplicative inverse of “A modulo M” exists if and only if A and M are relatively prime (i.e. if gcd(A, M) = 1)

int modInverse(int a, int m)            // pair that returns '-1' ==>> (a == 6, m == 8)
{
    for (int i=1; i<m; ++i)
    {
        if((a*i)%m==1)
        {
            return i;
        }
    }
    return -1;
}