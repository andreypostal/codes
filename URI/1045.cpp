#include <bits/stdc++.h>

using namespace std;

vector < double > v;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(), v.end());
	a = v[2];
	b = v[1];
	c = v[0];

	if(a >= b + c) {
		cout << "NAO FORMA TRIANGULO" << endl;
	} else {
		if(a * a == b*b + c*c) {
			cout << "TRIANGULO RETANGULO" << endl;
		}
		if(a * a > b*b + c*c) {
			cout << "TRIANGULO OBTUSANGULO" << endl;
		}
		if(a * a < b*b + c*c) {
			cout << "TRIANGULO ACUTANGULO" << endl;
		}
		if(a == b && b == c) {
			cout << "TRIANGULO EQUILATERO" << endl;
		}	
		if((a == b && a != c) || (a == c && c != b) || (b == c && c != a))
			cout << "TRIANGULO ISOSCELES" << endl;
	}
	return 0;
}