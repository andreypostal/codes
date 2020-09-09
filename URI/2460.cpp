#include <bits/stdc++.h>

using namespace std;

map< int, int > m;
map< int, int > mp;

int main() {
    int n, aux, t;
    scanf("%d", &n);
    t = n;
   	for(int i=0;i<n;i++) {
   		scanf("%d", &aux);
   		m[i] = aux;
   		mp[aux] = i;
   	}
   	scanf("%d", &n);
   	for(int i=0;i<n;i++) {
   		scanf("%d", &aux);
   		m[mp[aux]] = 0;
   	}
   	t -= n;
   	for(auto it=m.begin();it!=m.end();it++) {
   		if(it->second != 0) {
	   		printf("%d", it->second);
	   		t--;
	   		//cout << " aaaa " << t << " bbb " << endl;
	   		if(t == 0) {
	   			printf("\n");
	   			break;
	   		}
	   		else
	   			printf(" ");
   		}
   	}
    return 0;
}