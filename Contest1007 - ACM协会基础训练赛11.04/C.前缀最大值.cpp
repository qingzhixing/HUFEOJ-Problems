#include <iostream>
using namespace std;

const int MAX_N = 0;
const int MAX_M = 0;

typedef long long i64;

void solution()
{
	int n{};
	cin >> n;
	int max_num = -1;
	for (int i = 0; i < n; i++)
	{
		int num{};
		cin >> num;
		max_num = max(max_num, num);
	}

	cout << n * max_num << endl;
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