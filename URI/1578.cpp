#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> m;
		string mt;
		unsigned long long int res[m][m];
		unsigned long long int espacos[m];
		for(int j=0;j<m;j++)
			espacos[j] = 0;
		for(int j=0;j<m;j++)
			for(int k=0;k<m;k++) {
				cin >> mt;
				char * pEnd;
				unsigned long long int nb = strtoull(mt.c_str(), &pEnd, 10);
				res[j][k] = nb * nb;
				unsigned long long int s = to_string(res[j][k]).size();
				if(s > espacos[k])
					espacos[k] = s;
			}
		cout << "Quadrado da matriz #" << i+4 << ":" << endl;
		for(int j=0;j<m;j++) {
			for(int k=0;k<m;k++) {
				long long int sp = espacos[k] - to_string(res[j][k]).size();
				for(int l=0;l<sp;l++)
					cout << " ";
				cout << res[j][k];
				if(k < m - 1)
					cout << " ";
			}
			cout << endl;
		}
		if(i < n - 1)
			cout << endl;
	}
}