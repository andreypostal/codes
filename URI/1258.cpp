#include <bits/stdc++.h>

using namespace std;

vector < pair < pair < string, string > , char > > v;

bool comp(pair < pair < string, string > , char > p1, pair < pair < string, string > , char > p2) {
	pair < string, string > pa1 = p1.first;
	pair < string, string > pa2 = p2.first;

	if(pa1.first == "branco" && pa2.first == "vermelho")
		return true;
	if(pa1.first == "vermelho" && pa2.first == "branco")
		return false;
	if(p1.second == 'P' && p2.second != 'P')
		return true;
	if(p1.second != 'P' && p2.second == 'P')
		return false;
	if(p1.second == 'M' && p2.second == 'G')
		return true;
	if(p1.second == 'G' && p2.second == 'M')
		return false;
	return pa1.second < pa2.second;
}

int main() {
	int n, f = 0;
	string nome, cor;
	char tamanho;
	while(scanf("%d", &n) && n) {
		cin.ignore();
		if(f)
			cout << endl;
		f = 1;
		for(int i=0;i<n;i++) {
			getline(cin, nome);
			//cout << nome << " nome " << endl;
			cin >> cor;
			cin.ignore();
			//cout << cor << " cor " << endl;
			scanf("%c", &tamanho);
			cin.ignore();
			//cout << tamanho << " tam " << endl;
			pair < string, string > p(cor, nome);
			pair < pair < string, string >, char > a(p, tamanho);
			v.push_back(a);
		}
		sort(v.begin(), v.end(), comp);
		for(pair < pair < string, string > , char > p : v) {
			cout << p.first.first << " " << p.second << " " << p.first.second << endl;
		}
		v.clear();
	}
}