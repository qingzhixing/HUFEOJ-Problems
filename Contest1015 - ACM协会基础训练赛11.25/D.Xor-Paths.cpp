#include <iostream>
using namespace std;

typedef long long i64;

void solution()
{
	i64 n;
	cin >> n;
	i64 max_freq = -1;
	i64 freq[110]{};
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		freq[a]++;
		max_freq = max(max_freq, freq[a]);
	}
	cout << max_freq << endl;
}

int main()
{
	solution();
	return 0;
}