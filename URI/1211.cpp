#include <bits/stdc++.h>

using namespace std;

vector < string > s;

int main() {
	int n;
	string aux;
	while(scanf("%d", &n) != EOF) {
		for(int i=0;i<n;i++) {
			cin >> aux;
			s.push_back(aux);
		}
		sort(s.begin(), s.end());
		int i=0, total = 0;
		string anterior;
		int sz = aux.size();
		for(string a : s) {
			if(i > 0) {
				for(int j=0;j<sz;j++) {
					if(a[j] == anterior[j])
						total ++;
					else
						break;
				}
			}
			anterior = a;
			i++;
		}
		cout << total << endl;
		s.clear();
	}
	return 0;
}