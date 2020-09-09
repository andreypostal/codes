#include <bits/stdc++.h>

using namespace std;

int main() {
	float total = 0, soma = 0;
	while(true) {
		float n;
		cin >> n;
		if(n >= 0 && n <= 10) {
			total++;
			soma += n;
			if(total == 2) {
				printf("media = %.2f\n", soma / 2);
				total = 0;
				soma = 0;
			}
			if(total == 0) {
				int b = 0;
				while(b != 1) {
					cout << "novo calculo (1-sim 2-nao)" << endl;
					cin >> b;
					if(b == 2)
						return 0;
				}
			}
		} else {
			printf("nota invalida\n");
		}
	}
	return 0;
}