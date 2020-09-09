#include <bits/stdc++.h>

using namespace std;

vector < int > a;
int n, m, x;

bool comparacao(int i1, int i2) 
{ 
	int md1 = i1 % m;
	//if(i1 < 0)
	//	md1 *= -1;
	int md2 = i2 % m;
	//if(i2 < 0)
	//	md2 *= -1;

    if(md1 < md2)
    	return true;
    if(md1 > md2)
    	return false;

    if((i1 % 2 != 0 && i2 % 2 == 0))
    	return true;
   	if((i1 % 2 == 0 && i2 % 2 != 0))
   		return false;
   	if((i1 % 2 != 0 && i2 % 2 != 0))
   		return i1 > i2;

   	return i1 < i2;
} 

int main() {
	
	while(true) {
		scanf("%d %d", &n, &m);
		if(n == 0 && m == 0) {
			printf("0 0\n");
			break;
		}

		for(int i=0;i<n;i++) {
			scanf("%d", &x);
			a.push_back(x);
		}

		sort(a.begin(), a.end(), comparacao);

		printf("%d %d\n", n, m);
		for(int b : a) {
			printf("%d\n", b);
		}

		a.clear();
	}

	

	return 0;
}