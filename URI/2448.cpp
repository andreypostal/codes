#include <bits/stdc++.h>

using namespace std;

unordered_map < long long int, int > mp;

int main() {
	int n, m;
	long long aux;
	scanf("%d %d", &n, &m);
	long long int atual;
	for(int i=0;i<n;i++) {
		scanf("%lld", &aux);
		mp[aux] = i;
		if(i == 0)
			atual = aux;
	}
	long long int mov = 0;
	for(int i=0;i<m;i++) {
		scanf("%lld", &aux);
		mov += abs(mp[atual] - mp[aux]);
		atual = aux;
	}
	printf("%lld\n", mov);
	return 0;
}