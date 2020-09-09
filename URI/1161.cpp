#include <bits/stdc++.h>

using namespace std;


int main() {
	int n1, n2;
	while(scanf("%d %d", &n1, &n2) != EOF) {
		unsigned long long int f1 = 1, f2 = 1;
		for(int i=2;i<=n1;i++) {
			f1 *= i;
		}
		for(int i=2;i<=n2;i++) {
			f2 *= i;
		}
		cout << f2 + f1 << endl;
	}
	return 0;
}