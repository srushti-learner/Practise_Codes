class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        int sign ;
        int result=0;
        int index=0;
        if(s[0]=='-')
        {
            sign=-1;
            index++;
        }
        else
        {
            sign=1;
        }
        int tracker=s.size()-1;
        while(tracker>=index)
        {
        
            int digit = s[tracker]-'0';
            if(result> INT_MAX/10 || result==INT_MAX && digit>INT_MAX%10)
            {
                return 0;
            }
            result=result*10+digit;
            tracker--;
             
        }
        return sign*result;
        
        
    }
};
