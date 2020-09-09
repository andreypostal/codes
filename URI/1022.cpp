#include <bits/stdc++.h>

using namespace std;

int mdc(int num1, int num2) {
    int resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return num1;
}

int main() {
	int n;
	cin >> n;
	for(int i=0;i<n;i++) {
		int n1, d1, n2, d2, nr, dr;
		char aux, op;
		scanf("%d %c %d %c %d %c %d", &n1, &aux, &d1, &op, &n2, &aux, &d2);
		switch(op) {
			case '+': {
				nr = (n1 * d2 + n2 * d1);
				dr = (d1 * d2);
			} break;
			case '-': {
				nr = (n1 * d2 - n2 * d1);
				dr = (d1 * d2);
			} break;
			case '*': {
				nr = (n1 * n2);
				dr = (d1 * d2);
			} break;
			case '/': {
				nr = (n1 * d2);
				dr = (d1 * n2);
			} break;
		}

		int ni = nr, di = dr;
		int dv = abs(mdc(nr, dr));
		cout << ni << "/" << di << " = " << nr / dv << "/" << dr / dv << endl;
	}
	return 0;
}