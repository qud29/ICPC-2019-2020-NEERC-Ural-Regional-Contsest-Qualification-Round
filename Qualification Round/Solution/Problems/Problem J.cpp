#include <iostream>
#include <vector>
#include <map>

using namespace std;

int katamari(vector<pair<int,pair<int,int>>>& v, vector<pair<int, int>>& vv, int sledge, map<int, int> m)
{
	if (sledge == -1)
	{
		auto ptr = (m.find(v[0].first));
		int count = ptr->second;
		if (count < v.size())
		{
			int nx_count = (m.find(v[count].first))->second;

		}
		else
		{

		}
	}
}
int main()
{
	int n, m;
	cin >> n >> m;
	int** p = new int*[n];
	for (int i = 0; i < n; ++i)
	{
		p[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; ++j)
		{
			int val;
			cin >> val;
			p[i][j] = val;
		}
	}
	
}