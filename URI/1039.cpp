#include <bits/stdc++.h>

using namespace std;

int main() {
	int r1, x1, y1, r2, x2, y2;
	while(scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF) {
		int r = 0;
		if( sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)) + r2 <= r1) {
			cout << "RICO" << endl;
		} else {
			cout << "MORTO" << endl;
		}
	}
	return 0;
}