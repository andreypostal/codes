#include <bits/stdc++.h>

using namespace std;

int n;
float a;
char c[1], d[50];

int main() {
	scanf("%d %f %s %[^\n]s", &n, &a, c, d);
	printf("%d%f%s%s\n", n, a, c, d);
	printf("%d\t%f\t%s\t%s\n", n, a, c, d);
	printf("%10d%10.6f%10s%10s\n", n, a, c, d);
	return 0;
}