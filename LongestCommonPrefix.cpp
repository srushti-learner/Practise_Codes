class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="";
        int i=0;
        if(strs.size()==1)
        {
            return strs[0];
        }
        if(strs[0][0]!=strs[strs.size()-1][0])
        {
            return "";
        }
        else
        {
            if(strs[0]==strs[strs.size()-1])
            {
                return strs[0];
            }
            while(strs[0][i]==strs[strs.size()-1][i] )
            {
                ans=ans+strs[0][i];
                i++;
            }
        }
        return ans;
        
        
    }
};
