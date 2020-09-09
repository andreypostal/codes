#include <bits/stdc++.h>

using namespace std;

int main() {
	double n1, n2;
	string n;
	getline(cin, n);
	cin >> n1 >> n2;
	printf("TOTAL = R$ %.2f\n", n2 * 0.15 + n1);
	return 0;
}