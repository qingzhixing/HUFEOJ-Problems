#include <iostream>
using namespace std;

typedef long long i64;

void solution()
{
	i64 n, k;
	cin >> n >> k;
	while (k)
	{
		if (k > (n % 10))
		{
			k -= n % 10 + 1;
			n /= 10;
		}
		else
		{
			n -= k;
			k = 0;
		}
	}
	cout << n << endl;
}

int main()
{
	solution();
	return 0;
}