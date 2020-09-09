#include <bits/stdc++.h>

using namespace std;

int pd[50];

int fib(int n) {
	if(n == 1)
		return 0;
	if(n == 2 || n == 3)
		return 1;
	if(pd[n] != 0)
		return pd[n];
	
	return pd[n] = fib(n-1) + fib(n-2);
}

int main() {
	int n;
	cin >> n;
	for(int i=1;i<=n;i++) {
		cout << fib(i);
		if(i < n)
			cout << " ";
	}
	cout << endl;
	return 0;
}