#include <bits/stdc++.h>
using namespace std;

int n, k;
vector < pair < int, int > > c;

int main() {
	int a, b;
	while(scanf("%d %d", &n, &k) && n+k > 0) {
		int carros = 0;
		int s = 1;
		for(int i=0;i<n;i++) {
			scanf("%d %d", &a, &b);
			if(s) {
				if(carros >= 1) {
					int tirar = 1;
					while(tirar && carros) {
						auto p = c.back();
						if(p.second <= a) {
							//cout << p.first << " " << p.second << " saiu " << endl;
							c.erase(c.end());
							carros--;
						} else {
							tirar = 0;
						}
					}
				}
				for(auto p : c) {
				//	cout << p.first << p.second << endl;
					if(p.second < b) {
						s = 0;
					}
				}
				if(carros + 1 <= k) {
					carros++;
					c.push_back(pair< int, int >(a, b));
				} else {
					s = 0;
				}
			}
		}
		if(s)
			printf("Sim\n");
		else
			printf("Nao\n");
		c.clear();
	}

	return 0;
}