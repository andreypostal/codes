#include <bits/stdc++.h>

using namespace std;

int main() {

	int n1;
	cin >> n1;
	switch(n1) {
		case 61:
			cout << "Brasilia";
			break;
		case 71:
			cout << "Salvador";
			break;
		case 11:
			cout << "Sao Paulo";
			break;
		case 21:
			cout << "Rio de Janeiro";
			break;
		case 32:
			cout << "Juiz de Fora";
			break;
		case 19:
			cout << "Campinas";
			break;
		case 27:
			cout << "Vitoria";
			break;
		case 31:
			cout << "Belo Horizonte";
			break;
		default:
			cout << "DDD nao cadastrado";
			break;
	}

	cout << endl;

	return 0;
}