class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()==t.size())
        {
            
        unordered_map<char,int> umap;
        for(int i = 0;i<s.size();i++)
        {
            umap[s[i]]++;
        }
        for(int i = 0 ;i<t.size();i++)
        {
            auto key = t[i];
            auto itr = umap.find(key);
            if(itr!=umap.end() && itr->second>0)
            {
                itr->second--;
            }
            else
            {
                return false;
            }
        }
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
