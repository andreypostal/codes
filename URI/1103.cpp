#include <bits/stdc++.h>

using namespace std;

int main() {
	int h1, m1, h2, m2;
	while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2) && h1 + m1 + h2 + m2 != 0) {
		if(h1 == 0)
			h1 = 24;
		int mh1 = h1 * 60 + m1, mh2 = h2 * 60 + m2;
		if(mh1 > mh2)
			mh2 += 24 * 60;
		printf("%d\n", mh2 - mh1);
	}
	return 0;
}