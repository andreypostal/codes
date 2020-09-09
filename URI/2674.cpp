#include <bits/stdc++.h>

using namespace std;

bool primo(int n, int d, int m) {
	if(n == 1 || n == 0)
		return false;
	if(n == 2 || n == 3 || n == 5 || n == 7)
		return true;
	if(d > m)
		return true;
	if(n <= 10)
		return false;
	if(n % 2 == 0)
		return false;
	if(n % d == 0)
		return false;

	return primo(n, d+1, m);
}

int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		if(primo(n, 2, ceil(sqrt(n)))) {
			string str = to_string(n);
			int sz = str.size();
			int a = 0, b;
			for(int i=0;i<sz;i++) {
				b = str[i] - '0';
				if(!primo(b, 2, ceil(sqrt(b)))) {
					a = 1;
					break;
				}
			}
			if(a) {
				printf("Primo\n");
			} else {
				printf("Super\n");
			}
		} else {
			printf("Nada\n");
		}
	}
	return 0;
}