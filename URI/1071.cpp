#include <bits/stdc++.h>

using namespace std;

int main() {

	int n1, n2;
	cin >> n1 >> n2;
	int maior = max(n1, n2);
	int menor = min(n1, n2);
	int res = 0;
	for(int i=menor + 1; i<maior;i++) {
		res += (i % 2) != 0 ? i : 0;
	}

	cout << res << endl;

	return 0;
}