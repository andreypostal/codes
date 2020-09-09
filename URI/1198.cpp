#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n1, n2;
	while(scanf("%lld %lld", &n1, &n2) != EOF) {
		long long int a = n1 - n2;
		printf("%lld\n", abs(a));
	}
	return 0;
}