int lonelyinteger(vector<int> a) {

    unordered_map<int, int> mp;
    
    
    for(int i=0 ; i< a.size() ; i++)
    {
        mp[a[i]]++;
    }
    
    for(int i=0 ; i< a.size() ; i++)
    {
        if(mp[a[i]] == 1)
        {
            return a[i];
        }
    }
    return 0;
    
}
