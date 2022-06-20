int Solution::lengthOfLastWord(const string A) {
    int n = A.size();
    n=n-1;
    int count=0;
    if(A[n]==' ')
    {
        
        while(A[n]==' ')
        {
            n=n-1;
        }
        while(A[n]!=' ' && n>=0)
        {
            count=count+1;
            n=n-1;
        }
        return count;
    }
    else
    {
        while(A[n] != ' ' && n>=0)
        {
            count=count+1;
            n=n-1;
        }
        return count;
    }  
    
}
