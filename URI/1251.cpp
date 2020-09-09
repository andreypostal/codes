#include <bits/stdc++.h>

using namespace std;

int res[300];
string str;

int main() {
	int fl = 0;
	while(getline(cin, str)) {
		if(fl)
			cout << endl;
		fl = 1;

		for(int i =0; str[i] != '\0';i++) {
			int chave = (int) str[i];
			res[chave]++;
		}
		multimap <int , int> mp;
		for(int i=0;i<150;i++) {
			if(res[i] > 0)
				mp.insert(pair <int, int>(res[i], i));
		}
		int atual = 0;
		map <int, int> esc;

		for(pair <int, int> p : mp) {
			if(atual == 0)
				atual = p.first;
			
			if(p.first == atual) {
				esc[p.second] = p.first;
			} else {
				for(auto it = esc.rbegin(); it != esc.rend(); it++) {
					cout << it->first << " " << it->second << endl;
				}
				esc.clear();
				esc[p.second] = p.first;
				atual = p.first;
			}
		}
		for(auto it = esc.rbegin(); it != esc.rend(); it++) {
			cout << it->first << " " << it->second << endl;
		}
		for(int i=0;i<150;i++)
			res[i] = 0;
	}
	return 0;
}