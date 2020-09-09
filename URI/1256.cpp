#include <bits/stdc++.h>

using namespace std;

int hashf(int v, int a) {
	return v % a;
}

map < int, string > m;

int main() {
	int n, M, C, aux, hs;
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> M >> C;
		for(int j=0;j<M;j++)
			m[j] = "->";

		for(int j=0;j<C;j++) {
			cin >> aux;
			hs = hashf(aux, M);
			string r = " ";
			r += to_string(aux);
			r += " ->";
			m[hs] += r;
		}
		
		for(int j=0;j<M;j++) {
			cout << j << " " << m[j] << " \\" << endl;
		}
		if(i < n-1)
			cout << endl;
	}
	return 0;
}