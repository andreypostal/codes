#include <bits/stdc++.h>

using namespace std;
string s1, s2;
int lcs(int a, int b) {
	int r = -1, aux;
	for(int i=0;i<a;i++) {
		for(int j=0;j<b;j++) {
			aux = 0;
			int ai = i, bj = j;
			while(s1[ai] == s2[bj] && ai < a && bj < b) {
				aux++;
				ai++;
				bj++;
			}
			r = max(r, aux);
		}
	}

	return r;
}

int main() {
	while(getline(cin, s1)) {
		getline(cin, s2);
		int a = s1.size();
		int b = s2.size();
		printf("%d\n", lcs(a, b));
	}
	return 0;
}