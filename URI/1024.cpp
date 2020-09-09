#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	int n;
	cin >> n;
	getline(cin, str);
	for(int i=0;i<n;i++) {
		getline(cin, str);
		int sz = str.size();
		char res[1010];
		int k = sz - 1;
		res[sz] = '\0';
		for(int j=0;j<sz;j++, k--) {
			if((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a' && str[j] <= 'z')) {
				str[j] = str[j] + 3;
				res[k] = str[j];
			} else {
				res[k] = str[j];
			}
			int n2 = ceil(sz / 2.0);
			if(j < n2) {
				res[k] = res[k] - 1;
			}
		}
		cout << res << endl;
	}
}