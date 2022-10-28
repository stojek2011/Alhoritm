class Solution {
public:
    int reverse(int x) {
	long y;
	y = 0;
	while(x!=0)
	{
		y = y*10+x%10;
		x = x / 10;
	}
    if(abs(y)>=INT_MAX)
    {
        return(0);
    }
    return(y);
        
    }
};