#include <bits/stdc++.h>
using namespace std;

int nj, nc, nct, dir, vencedor;
vector < pair < int, char > > cartas;
pair < int, char > descarte;
map < int, vector < pair < int, char > > > jg;

void printCartasJogadores() {
	for(auto j : jg) {
		cout << "Jogador " << j.first << endl;
		for(auto k : j.second) {
			cout << k.first << " " << k.second << endl;
		}
		cout << endl;
	}
}

void printDescarte() {
	cout << "Descarte: " << endl;
	cout << descarte.first << " " << descarte.second << endl;
}

void printCartasBaralho() {
	cout << "Baralho: " << endl;
	for(auto k : cartas) {
		cout << k.first << " " << k.second << endl;
	}
}

bool sortPoder(pair < int, char > p1, pair < int, char > p2) {
	if(p1.first == p2.first) {
		if(p1.second == 'S')
			return true;
		if(p1.second == 'H' && p2.second != 'S')
			return true;
		if(p1.second == 'D' && (p2.second == 'D' || p2.second == 'C'))
			return true;
		if(p1.second == 'C' && p2.second == 'C')
			return true;
		return false;
	}
	return p1.first > p2.first;
}

int mudaVez(int vez) {
	vez += dir;
	if(vez > nj)
		vez = 1;
	if(vez < 1)
		vez = nj;
	return vez;
}

bool pegaCarta(int vez) {
	pair< int, char > ct = cartas.front();
	jg[vez].push_back(pair< int, char >(ct.first, ct.second));
	cartas.erase(cartas.begin());
	sort(jg[vez].begin(), jg[vez].end(), sortPoder);
}

int punicao(int vez) {
	if(descarte.first == 12) {
		dir *= -1;
		vez = mudaVez(vez);
		return vez;
	} else if(descarte.first == 7) {
		vez = mudaVez(vez);
		pegaCarta(vez);
		pegaCarta(vez);
		vez = mudaVez(vez);
		return vez;
	} else if(descarte.first == 1) {
		vez = mudaVez(vez);
		pegaCarta(vez);
		vez = mudaVez(vez);
		return vez;
	} else if(descarte.first == 11) {
		vez = mudaVez(vez);
		vez = mudaVez(vez);
		return vez;
	}
	return mudaVez(vez);
}

int descartar(int vez, int flag) {
	int i = 0;
	for(auto a : jg[vez]) {
		if(a.first == descarte.first || a.second == descarte.second) {
			descarte.first = a.first;
			descarte.second = a.second;
			jg[vez].erase(jg[vez].begin()+i, jg[vez].begin()+i+1);
			if(jg[vez].size() == 0) {
				vencedor = vez;
				return -10;
			}
			return punicao(vez);
		}
		i++;
	}
	if(!flag) {
		pegaCarta(vez);
		return descartar(vez, 1);
	}
	return mudaVez(vez);
}

void jogo(int vez) {
	vez = descartar(vez, 0);
	if(vez == -10) {
		printf("%d\n", vencedor);
		return;
	}

	//printCartasJogadores();
	//printDescarte();
	//cout << " vez do jg " << vez << endl;
	//cout << " ------------------------------------ " << endl;
	//getchar();

	jogo(vez);
}

int main() {
	int a, nco, prox;
	char b;

	while(scanf("%d %d %d", &nj, &nc, &nct) && nj + nc + nct != 0) {
		prox = 1;
		int j = 1, cont = 0;
		nco = nc * nj;
		for(int i=0;i<nct;i++) {
			scanf("%d %c", &a, &b);
			if(nco > 0) {
				cont++;
				jg[j].push_back(pair< int, char >(a, b));
				if(cont % nc == 0) {
					sort(jg[j].begin(), jg[j].end(), sortPoder);
					j++;
				}
				nco--;
			} else {
				cartas.push_back(pair<int, char>(a, b));
			}
		}
		pair< int, char > a = cartas.front();
		cartas.erase(cartas.begin());
		descarte.first = a.first;
		descarte.second = a.second;
		dir = 1;
		int vez = punicao(0);
		if(descarte.first == 12)
			vez = 1;
		//printCartasJogadores();
		//printDescarte();
		//printf("vez %d\n", vez);
		jogo(vez);
		jg.clear();
		cartas.clear();
	}
	return 0;
}