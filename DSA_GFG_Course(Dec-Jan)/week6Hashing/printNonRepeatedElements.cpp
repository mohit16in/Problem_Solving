//Problem: Print Non - Repeated elements
vector<int> printNonRepeated(int arr[],int n)
{
        //Your code here
        unordered_map<int, int> m;
    for(int i=0; i<n; ++i)
    {
        auto it = m.find(arr[i]);
        if(it==m.end())
            m[arr[i]] = 1;
        else
            m[arr[i]]++;
    }
    vector<int> v;
    for(auto &pr : m)
    {
        if(pr.second == 1)
            v.push_back(pr.first);
    }
    vector<int> result;
    for(int i=0; i<n; ++i)
    {
        auto track = find(v.begin(), v.end(), arr[i]);
        if(track != v.end())
            result.push_back(arr[i]);
    }
    return result;
}