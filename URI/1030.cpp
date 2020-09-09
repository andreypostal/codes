#include <bits/stdc++.h>

using namespace std;

int main()
{
	int c, aux;

	scanf(" %d", &c);
	for (int h = 1; h <= c; h++)
	{
		queue<int> f;
		int n, m;
		scanf(" %d %d", &n, &m);
		for (int i = 1; i <= n; i++)
			f.push(i);

		while (n > 1)
		{
			for (int i = 1; i <= m; i++)
			{
				aux = f.front();
				f.pop();
				n--;
				if (i % m != 0)
				{
					n++;
					f.push(aux);
				}
			}
		}

		printf("Case %d: %d\n", h, f.front());
	}

	return 0;
}