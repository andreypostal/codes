#include <bits/stdc++.h>

using namespace std;

multimap < int, string > m;
string str;

int main() {
	int n;
	cin >> n;
	getline(cin, str);
	for(int i=0;i<n;i++) {
		getline(cin, str);
		int sz = str.size();
		char pl[sz];
		int j = -1;
		int palavras = 0;
		for(int i=0;i<=sz;i++) {
			j++;
			if(str[i] == ' ' || str[i] == '\0') {
				pl[j] = '\0';
				string s(pl);
				m.insert(pair < int, string >(j, s));
				palavras++;
				j = -1;
			} else {
				pl[j] = str[i];
			}
		}
		j = 0;
		int atual = 0;
		multimap < int, string > mp;
		for(auto it=m.rbegin();it!=m.rend();it++) {
			if(atual == 0)
				atual = it->first;

			if(it->first == atual) {
				mp.insert(pair < int, string >(it->first, it->second));
			} else {
				for(auto it2=mp.rbegin();it2!=mp.rend();it2++) {
					j++;
					cout << it2->second;
					if(j < palavras)
						cout << " ";
				}
				mp.clear();
				mp.insert(pair < int, string >(it->first, it->second));
				atual = it->first;
			}
		}
		for(auto it2=mp.rbegin();it2!=mp.rend();it2++) {
			j++;
			cout << it2->second;
			if(j < palavras)
				cout << " ";
		}
		cout << endl;

		m.clear();
	}
	return 0;
}