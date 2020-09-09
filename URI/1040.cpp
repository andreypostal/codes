#include <bits/stdc++.h>

using namespace std;

double n1, n2, n3, n4, nAvg;

int main() {
	cin >> n1 >> n2 >> n3 >> n4;

	double avg = ((n1 * 2.0) + (n2 * 3.0) + (n3 * 4.0) + (n4 * 1.0)) / 10.0;

	
	printf("Media: %.1f\n", avg);

	if(avg >= 5.0 && avg < 7.0) {
		cout << "Aluno em exame." << endl;
		cin >> n1;
		printf("Nota do exame: %.1f\n", n1);
		nAvg = (avg + n1) / 2.0;
		if(nAvg >= 5.0)
			avg = 10;
	}

	if(avg >= 7.0) {
		cout << "Aluno aprovado." << endl;
	} else {
		cout << "Aluno reprovado." << endl;
	}

	if(nAvg) {
		printf("Media final: %.1f\n", nAvg);
	}

	return 0;
}