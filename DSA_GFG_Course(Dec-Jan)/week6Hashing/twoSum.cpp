//Problem: Two Sum
bool keypair(vector<int> A, int N, int X)
{
        for(int i=0; i<N-1; ++i)
    {
        int search = (X - A[i]);
        // cout << search << endl;
        if(search < 0)
            continue;
        auto it = find(A.begin()+i+1, A.end(), search);
        if(i>0 && it==A.end())
            it = find(A.begin(), A.begin()+i-1, search);

        if(it != A.end() && *it == search)
        {
            return 1;
        }
    }   
    return 0;
}