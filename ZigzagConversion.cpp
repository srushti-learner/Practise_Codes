class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> rows(min(numRows, int(s.size())));
        int currRow=0;
        bool goingDown = true;
        for(char c : s)
        {
            rows[currRow]=rows[currRow]+c;
            if(currRow==numRows-1) goingDown = false;
            if(currRow==0) goingDown = true;
            
            currRow +=goingDown? 1:-1;
        }
        string res;
        for(string x: rows)
        {
            res=res+x;
        }
        return res;
        
    }
};
