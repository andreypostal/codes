#include <bits/stdc++.h>

using namespace std;

int h1, m1, h2, m2, th, tmin;

int main() {
	cin >> h1 >> h2;
	if(h1 >= h2)
		th = (24 - h1) + h2;
	else
		th = h2 - h1;

	cout << "O JOGO DUROU " << th << " HORA(S)" << endl;

	return 0;
}