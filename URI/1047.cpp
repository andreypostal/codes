#include <bits/stdc++.h>

using namespace std;

int h1, m1, h2, m2, th, tmin;

int main() {
	cin >> h1 >> m1 >> h2 >> m2;
	if(h1 >= h2)
		th = (24 - h1) + h2;
	else
		th = h2 - h1;

	if(h1 == h2 && m2 > m1) {
		th = 0;
	}

	if(m1 > m2) {
		tmin = (60 - m1) + m2;
		th--;
	} else
		tmin = m2 - m1;

	cout << "O JOGO DUROU " << th << " HORA(S) E " << tmin << " MINUTO(S)" << endl;

	return 0;
}