#include <bits/stdc++.h>

using namespace std;

int main() {
	int a;
	cin >> a;
	int anos, meses, dias;
	anos = a / 365;
	a -= (anos * 365);
	meses = a / 30;
	a -= meses * 30;

	cout << anos << " ano(s)" << endl << meses << " mes(es)" << endl << a << " dia(s)" << endl;

	return 0;
}