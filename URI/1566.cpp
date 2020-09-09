#include <bits/stdc++.h>

using namespace std;

void fastscan(int &n)  { 
    register int c; 
    bool negative = false; 

    n = 0;

    c = getchar(); 
    
    if (c == '-') {
        negative = true; 
        c = getchar(); 
    }
  
    for (; (c >= '0' && c <= '9'); c = getchar())
        n = n * 10 + c - '0'; 
  
    if (negative) 
        n = -n; 
}

int v[250];

int main() {
	int n, t, aux;
	fastscan(n);
	for(int i=0;i<n;i++) {
		fastscan(t);
		int menor = 230;
		for(int j=0;j<t;j++) {
			fastscan(aux);
			v[aux]++;
			menor = min(menor, aux);
		}

		int j = 0;
		for(int k=menor;k<=230;k++) {
			for(int l=0;l<v[k];l++) {
				j++;
				printf("%d", k);
				if(j < t)
					printf(" ");
				else
					k = 235;
			}
		}
		printf("\n");
		for(int j=20;j<=230;j++)
			v[j] = 0;
	}
	return 0;
}