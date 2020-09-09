#include <bits/stdc++.h>

using namespace std;

vector < string > str;

int main() {
	int n;
	string aux;
	int esp = 0;
	while(scanf("%d", &n) && n != 0) {
		getline(cin, aux);
		if(esp) {
			cout << endl;
		}
		esp = 1;
		int maior = 0;
		for(int i=0;i<n;i++) {
			getline(cin, aux);
			int tm = aux.size();
			maior = max(maior, tm);
			str.push_back(aux);
		}
		for(string st : str) {
			int espacos = maior - st.size();
			for(int j=0;j<espacos;j++)
				cout << " ";
			cout << st << endl;
		}
		str.clear();
	}
	return 0;
}