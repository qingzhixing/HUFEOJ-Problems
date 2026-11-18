#include <iostream>
#include <vector>
#include <set>
using namespace std;

typedef long long i64;

void solution()
{
	i64 n{};
	cin >> n;
	vector<i64> a(n);
	for (auto i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	// 初始化后缀 mex max
	vector<i64> suf_mex_max(n + 1);
	set<i64> exist;
	i64 current_mex{};
	for (auto i = n - 1; i >= 0; i--)
	{
		exist.insert(a[i]);
		while (exist.count(current_mex) != 0)
		{
			current_mex++;
		}
		suf_mex_max[i] = max(suf_mex_max[i + 1], current_mex);
	}

	vector<i64> result;
	// 双指针求后续达到最大 mex 的最短段
	for (auto i = 0; i < n; i++)
	{
		set<i64> exist;
		i64 current_mex{};
		exist.clear();
		for (auto j = i; j < n; j++)
		{
			exist.insert(a[j]);
			while (exist.count(current_mex))
			{
				current_mex++;
			}
			if (current_mex == suf_mex_max[i])
			{
				result.push_back(suf_mex_max[i]);
				i = j;
				break;
			}
		}
	}

	cout << result.size() << endl;
	for (const auto &item : result)
	{
		cout << item << ' ';
	}
	cout << endl;
}

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		solution();
	}
	return 0;
}