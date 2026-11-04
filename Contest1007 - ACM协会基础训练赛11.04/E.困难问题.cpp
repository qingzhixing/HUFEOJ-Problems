#include <iostream>
using namespace std;

const int MAX_N = 0;
const int MAX_M = 0;

typedef long long i64;

void solution()
{
	int m{}, a{}, b{}, c{};
	cin >> m >> a >> b >> c;
	int result = 0;
	int needed = 0;
	if (a >= m)
	{
		result += m;
	}
	else
	{
		result += a;
		needed += m - a;
	}
	if (b >= m)
	{
		result += m;
	}
	else
	{
		result += b;
		needed += m - b;
	}

	result += min(needed, c);
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