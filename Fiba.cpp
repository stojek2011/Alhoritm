#include <iostream>
#include <vector>
using namespace std;
void main()
{
	long n;
	vector <long> Fiba;
	n = 2;
	Fiba.push_back(0);
	Fiba.push_back(1);
	
	while(Fiba[n-1]< LONG_MAX)
	{
		    Fiba.push_back(Fiba[n - 2] + Fiba[n - 1]);
			cout << Fiba[n - 2]<<'\n';
			n++;
	}

}