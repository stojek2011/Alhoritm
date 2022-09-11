#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
	int n, i,j;
	vector <string> S;
	map <string,int> Z1,Z2;
	string s;
	cin >> n;
	i = 0;
	while (i < n)
	{
		cin >> s;
		S.push_back(s);
		i++;
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		
		while (j < S[i].size()-3)
		{
			string w1, w2, W;
			w1=S[i][j];
			w1 = w1 + S[i][j + 1];
			w1 = w1 + S[i][j + 2];
			w2 = S[i][j+1];
			w2 = w2 + S[i][j + 2];
			w2 = w2 + S[i][j + 3];
			W = w1;
			W = W + " ";
			W = W + w2;

			if(Z1.find(W) == Z1.end())
			{
				Z1[W] = 0;
			}
			if (Z1.find(W) != Z1.end())
			{
				Z1[W] = Z1[W]+1;
			}
			if (Z2.find(w1) == Z2.end())
			{
				Z2[w1] = 0;
			}
			if (Z2.find(w1) != Z2.end())
			{
				Z2[w1] = Z2[w1] + 1;
			}
			if (Z2.find(w2) == Z2.end())
			{
				Z2[w2] = 0;
			}
			if (Z2.find(w2) != Z2.end())
			{
				Z2[w2] = Z2[w2] + 1;
			}
			
			j++;
		}
		i++;

	}
	
	i = 0;
	cout << Z2.size() << '\n';
	cout << Z1.size()<<'\n';

	for(auto now:Z1)
	{
		cout << now.first << " " << now.second<<'\n';
	}
	cin >> n;
}
