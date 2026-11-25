#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long i64;

void solution()
{
	i64 n;
	cin >> n;
	vector<string> strs(n + 10);
	for (int i = 1; i <= n; i++)
	{
		cin >> strs[i];
	}

	vector<i64> super_cnt(n + 10);

	// 统计每个字符串的超集个数
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == j)
			{
				continue;
			}
			if (strs[i] == strs[j])
			{
				// 相等时只能编号小的变成大的
				if (i < j)
				{
					super_cnt[i]++;
				}
				continue;
			}
			if (strs[j].find(strs[i]) != string::npos)
			{
				super_cnt[i]++;
			}
		}
	}

	// 根据超集个数排序
	vector<pair<i64, string>> result;
	for (int i = 1; i <= n; i++)
	{
		result.push_back({super_cnt[i], strs[i]});
	}

	// 按 super_cnt 倒序排序
	sort(result.begin(), result.end(), [](auto a, auto b)
		 { return b < a; });

	// 判断答案合法性
	i64 nxt_cnt = n - 1;
	for (const auto &[cnt, _] : result)
	{
		if (cnt != nxt_cnt)
		{
			cout << "NO" << endl;
			return;
		}
		nxt_cnt--;
	}

	cout << "YES" << endl;
	for (const auto &[_, str] : result)
	{
		cout << str << endl;
	}
}

int main()
{
	solution();
	return 0;
}