#include <bits/stdc++.h>

using namespace std;

string str;

int main() {
	string aux;
	int d, h, m, s;
	cin >> aux >> d >> h >> aux >> m >> aux >> s;
	int d2, h2, m2, s2;
	cin >> aux >> d2 >> h2 >> aux >> m2 >> aux >> s2;

	if(s > s2) {
		m2--;
		s2 += 60;
	}
	if(h > h2) {
		d2--;
		h2 += 24;
	}
	if(m > m2) {
		m2 += 60;
		h2--;
	}
	

	int dias = d2 - d;
	if(h + h2 + m + m2 + s + s2 != 0)
		d--;

	int hrs = h2 - h;
	if(hrs < 0) {
		dias++;
		hrs = 0;
	}

	if(h + h2 + m + m2 + s + s2 != 0)
		d--;
	
	int minutos = m2 - m;
	if(minutos < 0) {
		hrs++;
		minutos = 0;
	}
	int segundos = s2 - s;
	if(segundos < 0) {
		minutos++;
		segundos = 0;
	}
	cout << dias << " dia(s)" <<endl;
	cout << hrs << " hora(s)" << endl;
	cout << minutos << " minuto(s)" << endl;
	cout << segundos << " segundo(s)" << endl;
}