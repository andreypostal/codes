#include <bits/stdc++.h>

using namespace std;

int main() {
	double a, b, c;
    cin >> a >> b >> c;
    double d = b * b - (4 * a * c);
    if(a == 0 || d < 0)
        cout << "Impossivel calcular" << endl;
    else 
        printf("R1 = %.5f\nR2 = %.5f\n", (-b + sqrt(d)) / (2.0 * a), (-b - sqrt(d)) / (2.0 * a));

	return 0;
}