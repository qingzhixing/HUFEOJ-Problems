#include <iostream>
using namespace std;

const int MAX_N = 0;
const int MAX_M = 0;

typedef long long i64;

void solution()
{
	i64 n{};
	cin >> n;
	i64 result{};
	i64 negative_cnt{};
	for (int i = 1; i <= n; i++)
	{
		i64 a{};
		cin >> a;
		if (a == -1)
		{
			negative_cnt++;
			continue;
		}
		if (a == 0)
		{
			result += 1;
			continue;
		}
	}
	if (negative_cnt % 2 == 1)
	{
		result += 2;
	}
	cout << result << endl;
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