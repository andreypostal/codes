#include <bits/stdc++.h>

using namespace std;

unordered_map < string, int > m;
unordered_map < string, int > m2;

int main() {
	int n, tm, res, r1, r2;
	char pe[1];
	string chave, c1, c2;
	while(scanf("%d", &n) != EOF) {
		for(int i=0;i<n;i++) {
			chave = "";
			scanf("%d %s", &tm, &pe);
			chave += to_string(tm);
			chave += pe;
			m[chave]++;
			m2[chave]++;
		}
		res = 0;
		for(auto p : m) {
			c2 = "";
			r1 = p.second;

			c1 = p.first;
			if(c1[2] == 'D') {
				c2 += c1[0];
				c2 += c1[1];
				c2 += "E";
			}
			if(c1[2] == 'E'){
				c2 += c1[0];
				c2 += c1[1];
				c2 += "D";
			}
			r2 = m2[c2];

			m2[c1] = 0;

			res += min(r1, r2);
		}
		printf("%d\n", res);
		m.clear();
		m2.clear();
	}
	return 0;
}