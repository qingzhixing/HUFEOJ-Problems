#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int MAX_N = 0;
const int MAX_M = 0;

typedef long long i64;

void solution()
{
	string num;
	cin >> num;
	vector<i64> digits;
	for (const auto &ch : num)
	{
		digits.push_back(ch - 'a');
	}

	auto front = digits[0] + digits[1] + digits[2];
	auto back = digits[3] + digits[4] + digits[5];
	if (front == back)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
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