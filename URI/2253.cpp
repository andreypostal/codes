#include <bits/stdc++.h>

using namespace std;

int main() {

	string str;
	while(getline(cin, str)) {
		int sz = str.size(), up = 0, lw = 0, nm = 0, sp = 1;
		if(sz >= 6 && sz <= 32) {
			for(int i=0;i<sz;i++) {
				int sr = str[i], a = 'a', A = 'A', z = 'z', Z = 'Z', n0 = '0', n9 = '9';
				if(sr >= a && sr <= z)
					lw = 1;
				if(sr >= A && sr <= Z) {
					up = 1;
				}
				if(sr >= n0 && sr <= n9)
					nm = 1;
				if(sr > z || (sr > Z && sr < a) || (sr > n9 && sr < A) || sr < n0)
					sp = 0;
			}
		}
		if(up && lw && nm && sp)
			printf("Senha valida.\n");
		else
			printf("Senha invalida.\n");
	}
	return 0;
}