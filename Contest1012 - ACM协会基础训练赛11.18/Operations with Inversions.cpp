#include <iostream>
#include <stack>
using namespace std;

typedef long long i64;

void solution()
{
	i64 n{};
	cin >> n;

	// 单调栈
	stack<i64> st;
	for (int i = 1; i <= n; i++)
	{
		i64 a{};
		cin >> a;
		if (st.empty() || a >= st.top())
		{
			st.push(a);
		}
	}

	cout << n - st.size() << endl;
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