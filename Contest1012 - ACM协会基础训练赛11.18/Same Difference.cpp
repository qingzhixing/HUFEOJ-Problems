#include <iostream>
#include <string>
using namespace std;

typedef long long i64;

void solution()
{
	i64 n{};
	cin >> n;
	string s;
	cin >> s;
	i64 result{};
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] != s[n - 1])
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