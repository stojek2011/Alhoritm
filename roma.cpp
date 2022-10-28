class Solution {
public:
    string conv(char INT,int i)
{
  if(i==0)
  {
	if(INT=='0')
	{
		return("");
	}
  	if (INT == '1')
	{
		return("I");
	}
	if (INT == '2')
	{
		return("II");
	}
	if (INT == '3')
	{
		return("III");
	}
	if (INT == '4')
	{
		return("IV");
	}
	if (INT == '5')
	{
		return("V");
	}
	if (INT == '6')
	{
		return("VI");
	}
	if (INT == '7')
	{
		return("VII");
	}
	if (INT == '8')
	{
		return("VIII");
	}
	if (INT == '9')
	{
		return("IX");
	}
  }
  if (i == 1)
  {
	  if (INT == '0')
	  {
		  return("");
	  }
	  if (INT == '1')
	  {
		  return("X");
	  }
	  if (INT == '2')
	  {
		  return("XX");
	  }
	  if (INT == '3')
	  {
		  return("XXX");
	  }
	  if (INT == '4')
	  {
		  return("XL");
	  }
	  if (INT == '5')
	  {
		  return("L");
	  }
	  if (INT == '6')
	  {
		  return("LX");
	  }
	  if (INT == '7')
	  {
		  return("LXX");
	  }
	  if (INT == '8')
	  {
		  return("LXXX");
	  }
	  if (INT == '9')
	  {
		  return("XC");
	  }

  }
  if (i == 2)
  {
	  if (INT == '0')
	  {
		  return("");
	  }
	  if (INT == '1')
	  {
		  return("C");
	  }
	  if (INT == '2')
	  {
		  return("CC");
	  }
	  if (INT == '3')
	  {
		  return("CCC");
	  }
	  if (INT == '4')
	  {
		  return("CD");
	  }
	  if (INT == '5')
	  {
		  return("D");
	  }
	  if (INT == '6')
	  {
		  return("DC");
	  }
	  if (INT == '7')
	  {
		  return("DCC");
	  }
	  if (INT == '8')
	  {
		  return("DCCC");
	  }
	  if (INT == '9')
	  {
		  return("CM");
	  }
  }
  if (i == 3)
  {
	  if (INT == '0')
	  {
		  return("");
	  }
	  if (INT == '1')
	  {
		  return("M");
	  }
	  if (INT == '2')
	  {
		  return("MM");
	  }
	  if (INT == '3')
	  {
		  return("MMM");
	  }
  }
  return("");
}
    string intToRoman(int num) {
        
    int n,i;
	string roma;
	string INT;
	INT = to_string(num);
	i = 0;
	n = INT.size();
	while(i<n)
	{ roma.insert(0, conv(INT[n - i - 1],i));
		i++;
	}
	i = 0;
	return(roma);
    }
};