#include <bits/stdc++.h>

using namespace std;

int main() {
	int a;
	cin >> a;
	int h, m, s;
	h = a / 3600;
	a -= (h * 3600);
	m = a / 60;
	a -= m * 60;

	cout << h << ":" << m << ":" << a << endl;

	return 0;
}