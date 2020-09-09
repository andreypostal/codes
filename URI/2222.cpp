#include <bits/stdc++.h>

using namespace std;

int tb[5000][62];

int intersecao(int a, int b) {
	int total = 0, m = min(tb[a][0], tb[b][0]), p = max(tb[a][61], tb[b][61]);
	for(int i=p;i<=m;i++) {
		if(tb[a][i] && tb[b][i])
			total++;
	}
	return total;
}

int uniao(int a, int b) {
	int total = 0, m = max(tb[a][0], tb[b][0]), p = min(tb[a][61], tb[b][61]);
	for(int i=p;i<=m;i++) {
		if(tb[a][i] || tb[b][i])
			total++;
	}
	return total;
}

int main() {
	int c, n, q, a, b, op;
	scanf("%d", &c);
	while(scanf("%d", &n)!=EOF) {
		int maior = 0, menor = 62;
		for(int j=1;j<=n;j++) {
			int n1, aux;
			scanf("%d", &n1);
			for(int k=0;k<n1;k++) {
				scanf("%d", &aux);
				tb[j][aux]++;
				maior = max(maior, aux);
				menor = min(menor, aux);
			}
			tb[j][0] = maior;
			tb[j][61] = menor;
		}
		scanf("%d", &q);
		for(int j=0;j<q;j++) {
			scanf("%d %d %d", &op, &a, &b);
			if(op == 1) {
				printf("%d\n", intersecao(a, b));
			} else {
				printf("%d\n", uniao(a, b));
			}
		}
		for(int j=1;j<=n;j++){
            for(int k=0;k<=62;k++){
                tb[j][k]=0;
            }
        }
	}
	return 0;
}