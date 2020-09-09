#include <bits/stdc++.h>

using namespace std;

string a, b, c;

int main() {
	cin >> a;
	b = "";
	c = "";
	for(int i=0;i<a.length();i++) {
		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
			b += a[i];
	}
	for(int i=b.length() - 1;i>=0;i--) {
		c += b[i];
	}
	
	if(b.compare(c) == 0) {
		cout << 'S' << endl;
	} else {
		cout << 'N' << endl;
	}

	return 0;
}