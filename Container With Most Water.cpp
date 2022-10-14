class Solution {
public:
    int maxArea(vector<int>& height) {
        
    int n=height.size();
	int i = 0;
	int j ;
    int max=0;
    int h1,h2,k;
    int minh=0;
	while(i<n)
	{
		j = i;
        h1=height[i];
        if(minh<height[i])
        {
		while (j < n)
		{
			if (i!=j)
			{   
                h2=height[j];
				if (h1>=h2)
				{   k=h2;
                    k=(j-i)*k;
					if(max<(k))
                    {
                        max=k;
                    }
                    if(minh<h2)
                    {
                        minh=h2;
                    }
				}
				if (h2>h1)
				{   k=h1*(j-i);
					if(max<(k))
                      {max=k; 
                      }
                 if(minh<h1)
                    {
                        minh=h1;
                    }
				}
			}
			j++;
		}
        }
		i++;
	 }
	 
    return(max);
    }
};