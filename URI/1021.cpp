#include <bits/stdc++.h>

using namespace std;

float n;
int n100, n50, n20, n10, n5, n2, n1, m50, m25, m10, m05, m01;

void imprime() {
	if(n == 0) {
		cout << "NOTAS:" << endl;
		cout << n100 << " nota(s) de R$ 100.00" << endl;
		cout << n50 << " nota(s) de R$ 50.00" << endl;
		cout << n20 << " nota(s) de R$ 20.00" << endl;
		cout << n10 << " nota(s) de R$ 10.00" << endl;
		cout << n5 << " nota(s) de R$ 5.00" << endl;
		cout << n2 << " nota(s) de R$ 2.00" << endl;
		cout << "MOEDAS:" << endl;
		cout << n1 << " moeda(s) de R$ 1.00" << endl;
		cout << m50 << " moeda(s) de R$ 0.50" << endl;
		cout << m25 << " moeda(s) de R$ 0.25" << endl;
		cout << m10 << " moeda(s) de R$ 0.10" << endl;
		cout << m05 << " moeda(s) de R$ 0.05" << endl;
		cout << m01 << " moeda(s) de R$ 0.01" << endl;
		exit(0);
	}
}

int main() {
	cin >> n;

	n100 = n / 100;
	n -= n100 * 100;
	imprime();
	n50 = n / 50;
	n -= n50 * 50;
	imprime();
	n20 = n / 20;
	n -= n20 * 20;
	imprime();
	n10 = n / 10;
	n -= n10 * 10;
	imprime();
	n5 = n / 5;
	n -= n5 * 5;
	imprime();
	n2 = n / 2;
	n -= n2 * 2;
	n1 = n;
	n -= n1;
	imprime();
	n *= 100;
	n = round(n);
    m50 = n/50;
    n -= m50 * 50;
    n = round(n);
	imprime();
	m25 = n/25;
	n -= m25 * 25;
	n = round(n);
	imprime();
	m10 = n/10;
	n -= m10 * 10;
	n = round(n);
	imprime();
	m05 = n/5;
	n -= m05 * 5;
	n = round(n);
	imprime();
	m01 = n;
	n -= n;
	imprime();
}
