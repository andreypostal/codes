#include <bits/stdc++.h>

using namespace std;

int v[55][2], pd[55][110], m;

int missao(int i, int cap) {
	if(pd[i][cap] != -1)
		return pd[i][cap];
	if(i == m)
		return 0;
	if(cap == 0)
		return 0;

	int npg = missao(i+1, cap);

	if(cap - v[i][1] >= 0) {
		int pg = missao(i+1, cap - v[i][1]) + v[i][0];
		return pd[i][cap] = max(pg, npg);
	}

	return pd[i][cap] = npg;
}

int main() {
	int n, x, y, cap, res, aux, aux2;
	scanf("%d", &n);
	while(n--) {
		memset(pd,-1, sizeof(pd));
		scanf("%d", &m);
		for(int i=0;i<m;i++) {
			scanf("%d %d", &aux, &aux2);
			v[i][0] = aux;
			v[i][1] = aux2;
		}
		scanf("%d %d", &cap, &res);
		if(res - missao(0, cap) <= 0) {
			printf("Missao completada com sucesso\n");
		} else {
			printf("Falha na missao\n");
		}
	}

	return 0;
}