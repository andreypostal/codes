#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b;

	while(cin >> a >> b && a > 0 && b > 0) {
		int m = max(a, b), m2 = min(a, b), soma = 0;
		for(int i=m2;i<=m;i++) {
			cout << i << " ";
			soma += i;
		}
		cout << "Sum=" << soma << endl;
	}

	return 0;
}