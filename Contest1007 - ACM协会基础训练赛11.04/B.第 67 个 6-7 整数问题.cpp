#include <iostream>
using namespace std;

const int MAX_N = 0;
const int MAX_M = 0;

typedef long long i64;

void solution()
{
	int a[7] = {};
	int negative_sum{};
	for (int i = 0; i < 7; i++)
	{
		cin >> a[i];
		negative_sum += -a[i];
	}

	int result = -1e9;
	for (int i = 0; i < 7; i++)
	{
		result = max(result, negative_sum + 2 * a[i]);
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