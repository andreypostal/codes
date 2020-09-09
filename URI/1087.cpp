#include <bits/stdc++.h>

using namespace std;

string str;
int pd[8][8];
int xa1, ya1, xa2, ya2;

int move(int x, int y) {
	if(x == xa2 && y == ya2)
		return 0;
	if(x == xa2 || y == ya2)
		return 1;
	if(abs(x - xa2) == abs(y - ya2))
		return 1;
	return 2;
}

int main() {
	while(scanf("%d %d %d %d", &xa1, &ya1, &xa2, &ya2) && xa1 != 0) {
		cout << move(xa1, ya1) << endl;
	}
	return 0;
}