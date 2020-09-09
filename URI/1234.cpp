#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	while(getline(cin, str)) {
		int f = -1;
		int pl = 0;
		for(int i=0;i<str.size();i++) {
			if(str[i] >= 'A' && str[i] <= 'Z') {
				if(f == 0) {
					int vl = str[i] - 'A' + 'a';
					str[i] = vl;
				}
			} else if(str[i] >= 'a' && str[i] <= 'z') {
				if(f == 1) {
					int vl = str[i] + 'A' - 'a';
					str[i] = vl;
				}
			}
			if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
				f = !f;
			if(pl == 0) {
				if(str[i] >= 'A' && str[i] <= 'Z') {
					f = 0;
					pl = 1;
				}
				if(str[i] >= 'a' && str[i] <= 'z') {
					f = 1;
					pl = 1;
					i--;
				}
			}
		}
		cout << str << endl;
	}
	return 0;
}