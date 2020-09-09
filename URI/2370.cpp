#include <bits/stdc++.h>
using namespace std;

vector < pair < int, string > > v;
map < int, vector < string > > times;


int main() {
	int n, t, hab;
	string nome;
	scanf("%d %d", &n, &t);
	while(n--) {
		cin >> nome >> hab;
		v.push_back(pair< int, string >(hab, nome));
	}
	sort(v.begin(), v.end(), greater<>());
	int time = 1;
	while(v.size() > 0) {
		nome = v.front().second;
		//cout << endl << endl << nome << " " << time << endl << endl;
		v.erase(v.begin());
		times[time].push_back(nome);
		time++;
		if(time > t)
			time = 1;
	}
	int i = 0;
	for(auto b : times) {
		i++;
		sort(b.second.begin(), b.second.end());
		printf("Time %d\n", b.first);
		for(auto a : b.second) {
			cout << a << endl;
		}
		cout << endl;
	}

	return 0;
}