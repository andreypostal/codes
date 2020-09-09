#include <bits/stdc++.h>

using namespace std;

int v[55][2], pd[55][110], n;

int tempo(int i, int pizzas) {
	if(pd[i][pizzas] != -1)
		return pd[i][pizzas];
	if(i == n)
		return 0;
	if(pizzas == 0)
		return 0;

	int npg = tempo(i+1, pizzas);

	if(pizzas - v[i][1] >= 0) {
		int pg = tempo(i+1, pizzas - v[i][1]) + v[i][0];
		return pd[i][pizzas] = max(pg, npg);
	}

	return pd[i][pizzas] = npg;
}

int main() {
	int total, a, b;

	while(scanf("%d", &n) && n != 0) {
		memset(pd, -1, sizeof(pd));
		scanf("%d", &total);
		for(int i=0;i<n;i++) {
			scanf("%d %d", &a, &b);
			v[i][0] = a;
			v[i][1] = b;
		}
		printf("%d min.\n", tempo(0, total));
	}

	return 0;
}