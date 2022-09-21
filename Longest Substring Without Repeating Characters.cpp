class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    { 

    int n, i, n1,j,nmax;
    nmax = 0;
    n = s.length();
    n1 = 0;
	i = 0;
    bool f = true;
  
    while (i < n )
    {
        j = i-n1;
        while (j < i)
        {
            if (s[i] == s[j])
            {
                f = false;
               
            }  
                j++;
        }
        if ((f==true))
        {
           
            n1 = n1 + 1;
          
        }
        if ((f ==false))
        {  i=i-n1+1;
            n1 = 1;
        }
    
    	if (nmax < n1)
    	{nmax = n1;
      
    	}
        f = true;
        i++;
    }
    return(nmax);
    }
};