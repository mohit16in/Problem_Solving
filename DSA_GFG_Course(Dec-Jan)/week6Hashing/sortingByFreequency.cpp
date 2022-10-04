//Problem: Sorting elements of an array by frequency

bool cmp(pair<int, int>a, pair<int, int>b)
{
    if(a.second>b.second)
        return true;
    else 
        return false;
}


vector<int> sortByFreq(int arr[],int n)
{
    
    map<int, int> m;
    for(int i=0; i<n; ++i)
        m[arr[i]]++;
    // for(auto &pr : m)
    //     cout << pr.first << "->" << pr.second << endl;
    vector<pair<int, int>> v;
    for(auto &pr : m)
        v.push_back(make_pair(pr.first, pr.second));
    // for(int i=0; i<v.size(); ++i)
    //     cout << v[i].first << " ";
    sort(v.begin(), v.end());
    vector<int> result;
    for(int i=0; i<v.size(); ++i)
    {
        while(v[i].second--)
        result.push_back(v[i].first);
    }
    return result;
}