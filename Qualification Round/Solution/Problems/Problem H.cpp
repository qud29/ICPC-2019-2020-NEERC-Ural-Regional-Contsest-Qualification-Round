#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int a, b;
	cin >> a >> b;
	if (a == b)
	{
		cout << a << endl;
		return 0;
	}
	int value = max(a, b) - min(a, b);
	int count = 0;
	int divider = 1;
	while (divider <= min(a,b) && divider * divider <= value)
	{
		if (value % divider == 0)
		{
			++count;
			if (value / divider <= min(a, b) && divider * divider != value)
			{
				++count;
			}
		}
		++divider;
	}
	cout << count << endl;
	return 0;
}