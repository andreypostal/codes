#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	vector < int > v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(), v.end());
	for(int a : v) {
		cout << a << endl;
	}
	cout << endl;
	cout << a << endl << b << endl << c << endl;

	return 0;
}