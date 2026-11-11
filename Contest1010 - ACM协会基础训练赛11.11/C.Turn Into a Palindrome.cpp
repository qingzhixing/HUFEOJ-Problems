#include <iostream>
#include <string>
using namespace std;

const int MAX_N = 0;
const int MAX_M = 0;

typedef long long i64;

void solution()
{
	int n{};
	char c{};
	cin >> n >> c;
	string str;
	cin >> str;
	i64 result{};
	for (int i = 0; i < n / 2; i++)
	{
		// 相等则跳过
		if (str[i] == str[n - 1 - i])
		{
			continue;
		}
		// 否则不为 c 的全部改为 c
		if (str[i] != c)
		{
			result++;
		}
		if (str[n - 1 - i] != c)
		{
			result++;
		}
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