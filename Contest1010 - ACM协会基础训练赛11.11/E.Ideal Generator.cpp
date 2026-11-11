#include <iostream>
using namespace std;

const int MAX_N = 0;
const int MAX_M = 0;

typedef long long i64;

void solution()
{
	i64 n{};
	cin >> n;
	if (n % 2 == 0)
	{
		cout << "NO" << endl;
	}
	else
	{
		/**
		 * n = k + x
		 * [1, 1,..., 1 + x , ... ,1, 1] = k + x =
		 */
		cout << "YES" << endl;
	}
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