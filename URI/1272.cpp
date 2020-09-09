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
		int np = 0;
		for(int i=0;i<str.size();i++) {
			if(str[i] == ' ')
				np = 0;
			else if(np == 0) {
				res += str[i];
				np = 1;
			}
		}
		cout << res << endl;
	}
	return 0;
}