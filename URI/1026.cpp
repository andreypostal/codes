#include <bits/stdc++.h>

using namespace std;

int bn[32][2];
int res[32];

void decToBinary(long long int n, int n2) { 
  	for(int i = 0; i < 32; i++) {
  		bn[i][n2] = 0;
  	}

    int i = 0; 
    while (n > 0) { 
        bn[i][n2] = n % 2; 
        n = n / 2; 
        i++; 
    }
/*
    for (int j = 31; j >= 0; j--) 
        cout << bn[j][n2];
    cout << endl; */
} 

long long int binaryDec() {
	long long int r = 0;
	for(int i=0;i<32;i++) {
		if(res[i]) {
			r += pow(2, i);
		}
	}
	return r;
}

int main() {
	string str;
	long long int n1, n2;
	while(scanf("%lld %lld", &n1, &n2) != EOF) {
		decToBinary(n1, 0);
		decToBinary(n2, 1);
		
		for(int i=0;i<32;i++)
			res[i] = (bn[i][0] + bn[i][1]) % 2;

/*
		for (int j = 31; j >= 0; j--) 
       		cout << res[j];
    	cout << endl;*/

		cout << binaryDec() << endl;
	}
}