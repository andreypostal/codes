#include <bits/stdc++.h>

using namespace std;

struct Time
{
	int id, pontos, cestas, sofridas;
};

bool customSort(const Time a, const Time b)
{
	if (a.pontos == b.pontos)
	{
		double avg = (double)a.cestas / (double)max(a.sofridas, 1);
		double avg2 = (double)b.cestas / (double)max(b.sofridas, 1);

		//cout << a.id << " ID " << avg << " 1 " << avg2 << " ID 2 " << b.id << endl;

		if (avg == avg2)
		{
			if (a.cestas == b.cestas)
				return a.id < b.id;

			return a.cestas > b.cestas;
		}
		return avg > avg2;
	}

	return a.pontos > b.pontos;
}

int main()
{
	int n;
	int cnt = 0, x, y, z, w;
	while (scanf(" %d", &n) && n)
	{
		if (cnt)
			printf("\n");

		cnt++;

		Time times[110];

		for (int i = 0; i < n; i++)
		{
			times[i].pontos = 0;
			times[i].cestas = 0;
			times[i].sofridas = 0;
		}

		for (int i = 0; i < (n * (n - 1)) / 2; i++)
		{
			scanf(" %d %d %d %d", &x, &z, &y, &w);
			if (z > w)
			{
				times[x - 1].pontos += 2;
				times[y - 1].pontos += 1;
			}
			else
			{
				times[y - 1].pontos += 2;
				times[x - 1].pontos += 1;
			}

			times[x - 1].id = x;
			times[y - 1].id = y;

			times[x - 1].cestas += z;
			times[x - 1].sofridas += w;
			times[y - 1].cestas += w;
			times[y - 1].sofridas += z;
		}

		sort(times, times + n, customSort);

		printf("Instancia %d\n", cnt);
		for (int i = 0; i < n; i++)
		{
			if (i)
				printf(" ");

			printf("%d", times[i].id);
		}

		putchar('\n');
	}

	return 0;
}