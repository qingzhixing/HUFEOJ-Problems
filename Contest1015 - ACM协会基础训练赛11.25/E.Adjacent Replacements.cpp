#include <iostream>
#include <cmath>
using namespace std;

typedef long long i64;

void solution()
{
	i64 n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		cout << i64(ceil(a / 2.0) * 2.0 - 1) << ' ';
	}
	cout << endl;
}

int main()
{
	solution();
	return 0;
}