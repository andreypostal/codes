#include <bits/stdc++.h>
using namespace std;

int T, M, N, PD[51][100005];

int possibilidades(int i, int min, int res) {
	if(i >= N)
		min++;

	if(min >= T)
		return res;

	if(PD[min][i] != -1)
		return PD[min][i];

	if(i + 1 <= N)
		res++;

	if(i - 1 >= N)
		res++;

	PD[min][i] = res;

	return possibilidades(i+1, min, res);
}

int main() {
	memset(PD, -1, sizeof(PD));

	cin >> T >> M >> N;
	int r = 0;
	for(int i = 0;i<T;i++) {
		r += possibilidades(0, i, 0);
	}

	cout << r << endl;

	return 0;
}