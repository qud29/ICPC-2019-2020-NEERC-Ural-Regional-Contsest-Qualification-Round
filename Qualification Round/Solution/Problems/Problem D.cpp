#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> v;
	v.resize(3);
	v[0] = 0;
	v[1] = 0;
	v[2] = 0;
	v[k - 1] = 1;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		swap(v[x - 1], v[y - 1]);
	}
	for (int i = 0; i < 3; ++i)
	{
		if (v[i] == 1)
		{
			cout << i + 1 << endl;
		}
	}
	return 0;
}