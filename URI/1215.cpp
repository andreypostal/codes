#include <bits/stdc++.h>
using namespace std;

map < string, int > p;

int main() {
	char str[500];

	while(scanf("%s", str) != EOF) {
		string st = "";
		int soma = 0;
		int incluir = 1;
		for(int i=0;str[i] != '\0';i++) {
			int ic = 1;
			str[i] = tolower(str[i]);
			if(str[i] < 'a' || str[i] > 'z') {
				if(st.size())
					p[st]++;
				st = "";
				ic = 0;
			}
			if(ic)
				st += str[i];
		}
		if(incluir) {
			p[st]++;
		}
	}
	for(auto a : p) {
		if(a.first.size() > 0)
			cout << a.first << endl;
	}

	return 0;
}