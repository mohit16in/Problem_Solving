//Problem: Max distance between same elements
int maxDistance(int arr[], int n)
{
    
    map<int, int> fst_ocrnce;
    for(int i=0; i<n; ++i)
    {
        auto it = fst_ocrnce.find(arr[i]);
        if(it==fst_ocrnce.end())
        {
            fst_ocrnce[arr[i]] = i;
        }
    }
    map<int, int> lst_ocrnce;
    for(int i=n-1; i>=0; --i)
    {
        auto it = lst_ocrnce.find(arr[i]);
        if(it ==lst_ocrnce.end())
        {
            lst_ocrnce[arr[i]] = i;
        }
    }
    int mx=0; 
    int highest=0;
    // cout << fst_ocrnce.size();
    for(auto it = fst_ocrnce.begin(), itt = lst_ocrnce.begin(); it!=fst_ocrnce.end(); ++it, ++itt)
    {
        highest = itt->second - it->second;
        mx = max(mx, highest);
    }    
    return mx;
}
