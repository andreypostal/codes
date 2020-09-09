#include <bits/stdc++.h>

using namespace std;

int main() {
	int T, a, res[] = {1, 7, 9, 3};
	scanf("%d", &T);
	for(int i=0;i<T;i++) {
		scanf("%d", &a);
		printf("%d\n", res[a & 3]);
	}
	return 0;
}