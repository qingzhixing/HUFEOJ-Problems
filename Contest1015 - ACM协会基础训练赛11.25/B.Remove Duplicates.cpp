#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long i64;

void solution()
{
	i64 n;
	cin >> n;
	vector<i64> a(n + 10);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	bool visited[1010] = {};
	vector<i64> result;
	for (int i = n - 1; i >= 0; i--)
	{
		if (!visited[a[i]])
		{
			visited[a[i]] = true;
			result.push_back(a[i]);
		}
	}
	reverse(result.begin(), result.end());

	cout << result.size() << endl;
	for (const auto &item : result)
	{
		cout << item << ' ';
	}
	cout << endl;
}

int main()
{
	solution();
	return 0;
}