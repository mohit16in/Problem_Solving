//Problem: Check if two arrays are equal or not
bool check(vector<ll> A, vector<ll> B, int N) 
{
        
    map<long, long> m;
    for(int i=0; i<N; ++i)
    {
        auto it = m.find(A[i]);
        if(it==m.end())
        {
            m[A[i]] = 1;
        }
        else
            m[A[i]]++;
    }
    for(int i=0; i<N; ++i)
    {
        auto it = m.find(B[i]);
        if(it==m.end())
        {
            return 0;
        }
        else if(m[B[i]]==0)
        {
            return 0;
        }
        else
            m[B[i]]--;
    }
    return 1;
}
