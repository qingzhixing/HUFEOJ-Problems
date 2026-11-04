#include <iostream>
#include <string>
using namespace std;

const int MAX_N = 0;
const int MAX_M = 0;

typedef long long i64;

void solution()
{
	int n{};
	cin >> n;
	int cnt_1[30]{}, cnt_2[30]{};
	string s1, s2;
	cin >> s1 >> s2;
	for (const auto &ch : s1)
	{
		cnt_1[ch - 'a']++;
	}
	for (const auto &ch : s2)
	{
		cnt_2[ch - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (cnt_1[i] != cnt_2[i])
		{
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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