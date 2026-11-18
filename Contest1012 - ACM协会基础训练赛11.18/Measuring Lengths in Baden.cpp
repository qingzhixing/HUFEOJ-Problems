#include <iostream>
#include <cmath>
using namespace std;

typedef long long i64;

void solution()
{
	double n{};
	cin >> n;
	i64 feet = (i64)round(n / 3);
	cout << feet / 12 << ' ' << feet % 12 << endl;
}

int main()
{
	solution();
	return 0;
}