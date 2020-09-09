#include <bits/stdc++.h>

using namespace std;


int main() {
	long int x;
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) {
		int f = 0;
		scanf("%ld", &x);
		string s = to_string(x);
		int tm = s.size();
		if(x == 2)
			printf("Prime\n");
		else if(x % 2 == 0 || x == 1 || x == 0)
			printf("Not Prime\n");
		else if(x == 5)
			printf("Prime\n");
		else if(s[tm-1] == '5')
			printf("Not Prime\n");
		else {
			int soma = 0;
			for(int j=0;j<tm;j++) {
				soma += s[j] - '0';
			}
			if(soma % 3 == 0) {
				f = 1;
				printf("Not Prime\n");
			}
			if( f == 0) {
				for(int j=3;j<sqrt(x);j+=2) {
					if(x % j == 0 && j < x) {
						f = 1;
						printf("Not Prime\n");
						break;
					}
				}
			}
			if(f == 0)
				printf("Prime\n");
		}
	}
	return 0;
}