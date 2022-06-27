vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int n = A.size();
    vector<int> v;
    unordered_map <int,int> umap;
    for(int i=0;i<n;i++)
    {
        umap[A[i]]++;
    }
    for(auto x : B)
    {
        if(umap.find(x)!=umap.end())
        {
            auto temp = umap.find(x);
            if(temp->second==0)
            {
                continue;
            }
            temp->second-- ;
            v.push_back(x);
        }
    }
    return v;
}
