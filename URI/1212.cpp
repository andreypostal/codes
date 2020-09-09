#include <bits/stdc++.h>

using namespace std;

int carry(int a, int b, int ant) {
	if(a + b + ant >= 10)
		return 1;
	else
		return 0;
}

int main() {
	string n, m;
	while(cin >> n >> m) {
		if(n == "0" && m == "0")
			break;
		string nd = "0", md = "0";
		int sn = n.size();
		int sm = m.size();
		for(int i=0;i<=(20 - sn);i++)
			nd += "0";
		for(int i=0;i<=(20 - sm);i++)
			md += "0";
		int ant = 0, total = 0;
		nd += n;
		md += m;
		int snd = nd.size();
		int smd = md.size();
		for(int i=max(snd, smd) - 1;i>=11;i--) {
			ant = carry(nd[i] - '0', md[i] - '0', ant);
			total += ant;
		}
		if(total == 0) {
			printf("No carry operation.\n");
		} else if(total == 1) {
			printf("%d carry operation.\n", total);
		} else {
			printf("%d carry operations.\n", total);
		}
	}
	return 0;
}