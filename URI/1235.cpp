#include <bits/stdc++.h>

using namespace std;

string str;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	for(int i=0;i<n;i++) {
		getline(cin, str);
		string res;
		int sz = str.size();
		for(int i=(sz/2)-1;i>=0;i--) {
			res += str[i];
		}
		for(int i=sz-1;i>=(sz/2);i--) {
			res += str[i];
		}
		cout << res << endl;
	}
	return 0;
}