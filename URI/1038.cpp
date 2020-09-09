#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, y;
	double v;
	cin >> x >> y;
	switch(x) {
		case 1:
			v = 4;
			break;
		case 2:
			v = 4.5;
			break;
		case 3:
			v = 5;
			break;
		case 4:
			v = 2;
			break;
		case 5:
			v = 1.5;
			break;
	}

	printf("Total: R$ %.2f\n", v * y);

	return 0;
}