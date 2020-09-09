#include <bits/stdc++.h>

using namespace std;

int sz, digitos[15], total;
long long int original;
int escreveu[15];

void possibilidades(long long int min, long long int max) {
	for(long long int i=min;i<=max;i++) {
		long long int sqi = (i * i) - original;
		//cout << sqi << endl;
		string sqs = to_string(sqi);
		int nDg[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, ndg = 0;
		for(int j=0;sqs[j] != '\0';j++) {
			int dg = sqs[j] - '0';
			if(digitos[dg] - nDg[dg] > 0) {
				nDg[dg]++;
				ndg++;
			} else {
				break;
			}
		}
		if(ndg == sz) {
			total++;
		}
	}
}


int main() {
	scanf("%lld", &original);
	string str = to_string(original);
	sz = str.size();
	sort(str.begin(), str.end(), greater<char>());
	for(int i=0;i<sz;i++) {
		int a = str[i] - '0';
		digitos[a]++;
	}
	string str2 = str;
	sort(str2.begin(), str2.end());
	possibilidades(sqrt(original + atoll(str2.c_str())), sqrt(original + atoll(str.c_str())));
	printf("%d\n", total);

	return 0;
}