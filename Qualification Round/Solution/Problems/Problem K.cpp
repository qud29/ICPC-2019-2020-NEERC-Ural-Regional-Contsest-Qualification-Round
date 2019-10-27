#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>

using namespace std;

long long int double_square(int n, vector<pair<int, int>>& v)
{
	long long int square = 0;
	for (int i = 0; i < n; ++i)
	{
		square += ((long long)v[(i + 1) % n].first - (long long)v[i].first) * ((long long)v[(i + 1) % n].second + (long long)v[i].second);
	}
	return abs(square);
}

long long int double_triangle_square(int a, int b, vector<pair<int, int>>& v)
{
	long long int square = 0;
	square += ((long long)v[a].first - (long long)v[0].first) * ((long long)v[0].second + (long long)v[a].second) + ((long long)v[b].first - (long long)v[a].first) * ((long long)v[b].second + (long long)v[a].second)
		+ ((long long)v[0].first - (long long)v[b].first) * ((long long)v[0].second + (long long)v[b].second);
	return abs(square);
}

int main()
{
	int n = 0;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	vector<long long int> square;
	for (int i = 1; i < n - 1; ++i)
	{
		square.push_back(double_triangle_square(i, i + 1, v));
	}
	if (n == 3)
	{
		cout << v[0].first << ' ' << v[0].second << endl;
		cout << 3 * v[0].first - v[1].first - v[2].first << ' ' << 3 * v[0].second - v[1].second - v[2].second;

	}
	else
	{
		long long int right_sum = square[0];
		long long int left_sum = 0;
		for (int i = 1; i < n - 2; ++i)
		{
			left_sum += square[i];
		}
		if (left_sum == right_sum)
		{
			cout << v[0].first << ' ' << v[0].second << endl;
			cout << v[2].first << ' ' << v[2].second << endl;
		}
		else
		{
			int count_right = 1;
			while (!(right_sum > left_sum && right_sum - square[count_right - 1] < left_sum + square[count_right - 1]) &&
				!(left_sum > right_sum && right_sum + square[count_right] > left_sum - square[count_right]))
			{
				right_sum += square[count_right];
				left_sum -= square[count_right];
				if (right_sum == left_sum)
				{
					cout << v[0].first << ' ' << v[0].second << endl;
					cout << v[count_right + 2].first << ' ' << v[count_right + 2].second << endl;
					return 0;
				}
				++count_right;
			}
			if (right_sum > left_sum)
			{
				right_sum -= square[count_right - 1];
				int bx = v[count_right].first;
				int by = v[count_right].second;
				int cx = v[count_right + 1].first;
				int cy = v[count_right + 1].second;
				long long int tri_sq = double_triangle_square(count_right, count_right + 1, v);
				long long int x = 2 * tri_sq * cx + (right_sum + tri_sq - left_sum) * (long long)(bx - cx) - (2 * tri_sq - 1) * v[0].first;
				long long int y = 2 * tri_sq * cy + (right_sum + tri_sq - left_sum) * (long long)(by - cy) - (2 * tri_sq - 1) * v[0].second;
				cout << v[0].first << ' ' << v[0].second << endl;
				cout << x << ' ' << y << endl;
			}
			else
			{
				left_sum -= square[count_right];
				int bx = v[count_right + 1].first;
				int by = v[count_right + 1].second;
				int cx = v[count_right + 2].first;
				int cy = v[count_right + 2].second;
				long long int tri_sq = double_triangle_square(count_right +1, count_right + 2, v);
				long long int x = 2 * tri_sq * cx + (right_sum + tri_sq - left_sum) * (long long)(bx - cx) - (2 * tri_sq - 1) * v[0].first;
				long long int y = 2 * tri_sq * cy + (right_sum + tri_sq - left_sum) * (long long)(by - cy) - (2 * tri_sq - 1) * v[0].second;
				cout << v[0].first << ' ' << v[0].second << endl;
				cout << x << ' ' << y << endl;
			}
		}
	}
	return 0;
}