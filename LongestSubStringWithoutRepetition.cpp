class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>umap;
        int ans=0;
        int i=0;int j=0;
        while(i<s.size() && j<s.size() )
        {
            if(umap.find(s[i])!=umap.end())
            {
                j=max(umap[s[i]]+1,i);
            }
            ans=max(ans,i-j+1);
            umap[s[i]]=i;
            i++;
        }
        return ans;

        
    }
};
