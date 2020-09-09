#include <bits/stdc++.h>

using namespace std;

int main() {
	float n1, n2;
	double n3, n4;
	scanf("%f %f %lf %lf", &n1, &n2, &n3, &n4);
	printf("A = %f, B = %f\n", n1, n2);
	printf("C = %f, D = %f\n", n3, n4);
	printf("A = %.1f, B = %.1f\n", n1, n2);
	printf("C = %.1f, D = %.1f\n", n3, n4);
	printf("A = %.2f, B = %.2f\n", n1, n2);
	printf("C = %.2f, D = %.2f\n", n3, n4);
	printf("A = %.3f, B = %.3f\n", n1, n2);
	printf("C = %.3f, D = %.3f\n", n3, n4);
	printf("A = %.3E, B = %.3E\n", n1, n2);
	printf("C = %.3E, D = %.3E\n", n3, n4);
	printf("A = %.0f, B = %.0f\n", n1, n2);
	printf("C = %.0f, D = %.0f\n", n3, n4);
	return 0;
}