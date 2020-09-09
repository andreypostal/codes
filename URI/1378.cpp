#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while (scanf("%d", &n) && n != 0)
	{
		vector<int> x(n), y(n);
		unordered_map<long long int, long long int> m;
		for (int i = 0; i < n; i++)
		{
			scanf("%d %d", &x[i], &y[i]);
		}
		long long int total = 0;
		m.reserve(n);
		for (int i = 0; i < n; i++)
		{
			m.clear();
			for (int j = 0; j < n; j++)
			{
				if (j != i)
				{
					long long int a = x[i] - x[j],
								  b = y[i] - y[j];
					long long int dist = a * a + b * b;
					m[dist]++;
				}
			}
			for (pair<long long, long long int> p : m)
			{
				total += (p.second * (p.second - 1)) / 2;
			}
		}
		printf("%lld\n", total);
	}
	return 0;
}