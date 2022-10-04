//Problem: Smallest Positive Missing Number (medium level)
long hash[n+1] = {0};       //although it was instructed that we can't use extra space.     Since those +ve no. are continguos therefore, max value of that missing no
    for (int i=0; i<n; ++i)     //cant be greater than n+1. therefore created an hash array of size n+1
    {
        if(arr[i]>0 && arr[i]<=n)
        {
            hash[arr[i]]++;
        }
    }
    for (int i=1; i<=n; ++i)
    {
        if(hash[i]==0)
        {
            return i;
        }
    }
    return n+1;