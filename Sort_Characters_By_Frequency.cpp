class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> umap;
        for(int i=0;i<s.size();i++)
        {
            umap[s[i]]++;
        }
        
       priority_queue<pair<int, char>> pq;
        for(auto [ch, frequency] : umap) {
           pq.push({frequency, ch});
        }
        
        string ans="";
        pair<int,char> curr;
        while(!pq.empty())
        {
            curr=pq.top();
            cout<<curr.first<<" "<<curr.second;
            pq.pop();
            for(int i=0;i<curr.first;i++)
            {
                ans=ans+curr.second;
            }
        }
        return ans;
        
    }
};
