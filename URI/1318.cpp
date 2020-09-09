#include <bits/stdc++.h>

using namespace std;

map < int, int > mp;

int main() {
	int n, m, aux;
	while(scanf("%d %d", &n, &m) && n + m != 0) {
		for(int i=0;i<m;i++) {
			scanf("%d", &aux);
			mp[aux]++;
		}
		int res = 0;
		for(auto it=mp.begin();it != mp.end(); it++) {
			if(it->second > 1)
				res++;
		}
		printf("%d\n", res);
		mp.clear();
	}
	return 0;
}