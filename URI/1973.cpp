#include <bits/stdc++.h>

using namespace std;
long long n, estrelas[1000005], visitas[1000005];

int main()
{
	scanf("%lld", &n);

	unsigned long long carneiros = 0;
	long long visit = 0;

	for (int i = 0; i < n; i++)
	{
		scanf(" %lld", &estrelas[i]);
		carneiros += estrelas[i];
	}

	long long atual = 0;

	while (atual >= 0 && atual < n)
	{
		if (!visitas[atual])
			visit++;

		visitas[atual] = 1;
		if (estrelas[atual] % 2 == 0)
		{
			if (estrelas[atual])
			{
				estrelas[atual]--;
				carneiros--;
			}
			atual--;
		}
		else
		{
			if (estrelas[atual])
			{
				estrelas[atual]--;
				carneiros--;
			}
			atual++;
		}
	}

	cout << visit << ' ' << carneiros << endl;

	return 0;
}