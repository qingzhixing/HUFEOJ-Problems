#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef long long i64;

void solution()
{
	i64 n{}, k{};
	cin >> n >> k;
	string s;
	cin >> s;
	vector<i64> wake_diff(n + k + 10);
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '1')
		{
			wake_diff[i]++;
			wake_diff[i + k + 1]--;
		}
	}

	i64 result{};
	i64 wake_value{};
	for (int i = 0; i < n; i++)
	{
		wake_value += wake_diff[i];
		if (wake_value <= 0)
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