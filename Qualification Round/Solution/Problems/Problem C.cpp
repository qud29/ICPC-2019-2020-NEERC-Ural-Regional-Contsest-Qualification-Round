#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<string> s1;
	vector<string> s2;
	for(int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		s1.push_back(s);
	} 
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		s2.push_back(s);
	}
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (s1[i][j] != s2[i][j])
			{
				++count;
			}
		}
	}
	cout << count << endl;
	return 0;
}
