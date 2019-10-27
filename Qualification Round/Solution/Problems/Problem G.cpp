#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int panecakes1 = 0;
	int panecakes2 = 0;
	int position1 = 0;
	int position2 = 0;
	string s;
	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		for (int j = 0; j < m; ++j)
		{
			if (s[j] != 35)
			{
				if ((i + j) % 2 == 0)
				{
					++position2;
				}
				else {
					++position1;
				}
				if (s[j] == 80)
				{
					if ((i + j) % 2 == 0)
					{
						++panecakes2;
					}
					else {
						++panecakes1;
					}
				}
			}
		}
	}
	if (panecakes1 == 1 && position1 == 1 && panecakes2 == 1 && position2 == 1)
	{
		cout << "NO" << endl;
	}
	else
	{
		if (panecakes1 <= position2 && panecakes2 <= position1)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}