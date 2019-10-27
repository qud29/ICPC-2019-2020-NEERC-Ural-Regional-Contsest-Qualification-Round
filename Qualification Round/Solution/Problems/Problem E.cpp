#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> v;
	set<int> s;
	for (int i = 0; i < n; ++i)
	{
		int val = 0;
		cin >> val;
		v.push_back(val);
		s.insert(val);
	}
	for (int i = n - 1; i >= 0; --i)
	{
		auto ptr = s.find(v[i]);
		if (ptr != s.end())
		{
			s.erase(v[i]);
		}
		else
		{
			v[i] = 0;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << ' ';
	}
	return 0;
}