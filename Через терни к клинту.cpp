#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

class travel
{
public:
	int time;
	int id;
	char ID;
	bool operator()(const travel& x, const travel& y) const
	{
		return x.time < y.time;
	}

};
int main()
{
	int n,tt;
	cin >> n;
	int i = 0;
	int t;
	map<int,int> Ya;
	vector<travel> T;
	travel TT;
	int id;
	char ID;

	while(i<n)
	{
		cin >> tt;
		t= tt*24*60;
		cin >> tt;
		t= tt*60+t;
		cin >> tt;
		t = tt+t;
		cin >> id;
		cin >> ID;
		TT.id = id;
		TT.time = t;
		TT.ID = ID;
		T.push_back(TT);
		i++;
	}
	sort(T.begin(), T.end(),travel());
	i = 0;
	while(i<n)
	{
		cout << T[i].id << " "<<T[i].time<<'\n';
			i++;
	}
	i = 0;
	while (i<n)
	{
		if (T[i].ID != 'B')
		{
			if ((Ya.find(T[i].id) != Ya.end()))
			{
				if (T[i].ID == 'A')
				{
					cout << 2 << " " << T[i].id << " " << T[i].time << " " << Ya[T[i].id] << '\n';
					Ya[T[i].id] = -Ya[T[i].id] + T[i].time;
				}
				if ((T[i].ID == 'C') || (T[i].ID == 'S'))
				{
					Ya[T[i].id] = -Ya[T[i].id] +T[i].time;
				}
			}
			if ((Ya.find(T[i].id) == Ya.end()))
			{
				Ya[T[i].id] =T[i].time;
			}
		}
		i++;
	}
	for(auto now:Ya)
	{
		cout << now.second << " ";
	}

}