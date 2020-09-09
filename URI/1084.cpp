#include <bits/stdc++.h>

using namespace std;

int main() {

	char v[100005], aux;
	int d, N, D;

	while(scanf("%d %d", &N, &D) && N != 0) {
		int adc = -1;
		d = 0;
		for(int i=0;i<N;i++) {
			scanf(" %c", &aux);
			while(adc > -1 && d < D && aux > v[adc]) {
				adc--;
				d++;
			}
			if(adc+1 < N - D) {
				adc++;
				v[adc] = aux;
			}
		}
		v[N - D] = '\0';
		cout << v << endl;
	}
	return 0;
}