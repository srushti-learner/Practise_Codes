int Solution::solve(string A) {
    int n = A.size();
    int count=0;
    unordered_map<char,int> umap;
    for(int i=0;i<A.size();i++)
    {
        umap[A[i]]++;
    }
    for(auto x : umap)
    {
        if(x.second%2 == 0)
        {
            continue;
        }
        if(x.second%2 !=0)
        {
            count++;
        }
        if(count > 1 )
        {
            return false;
        }
    }
    return true;
}
