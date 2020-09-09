#include <bits/stdc++.h>

using namespace std;


int main() {
	float a, b, c;
	cin >> a >> b >> c;
	if(abs(b - c) < a && a < b + c && abs(a - c) < b && b < a + c && abs(a - b) < c && c < a + b) {
		cout << "Perimetro = ";
		printf("%.1f\n", a+b+c);
	} else {
		printf("Area = %.1f\n", ((a+b)*c)/2);
	}
	return 0;
}