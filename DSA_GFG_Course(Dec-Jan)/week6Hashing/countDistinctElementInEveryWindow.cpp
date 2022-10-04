//Problem: Count Distinct Elements in every window
vector <int> countDistinct (int A[], int n, int k)
{
    int i=0, j=0;
    vector<int> v;
    map<int, int> m;
    while(j<n)
    {
        m[A[j]]++;
        if(j-i+1<k)
            j++;
        else
        {
            v.push_back(m.size());
            auto it = m.find(A[i]);
            if(it->second == 1)
                m.erase(it);
            else
                m[A[i]]--;
            i++;
            j++;
        }
    }
    return v;
}