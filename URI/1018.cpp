#include <bits/stdc++.h>

using namespace std;

int o, n, n100, n50, n20, n10, n5, n2, n1;

void imprime()
{
    if (n == 0)
    {
        cout << o << endl;
        cout << n100 << " nota(s) de R$ 100,00" << endl;
        cout << n50 << " nota(s) de R$ 50,00" << endl;
        cout << n20 << " nota(s) de R$ 20,00" << endl;
        cout << n10 << " nota(s) de R$ 10,00" << endl;
        cout << n5 << " nota(s) de R$ 5,00" << endl;
        cout << n2 << " nota(s) de R$ 2,00" << endl;
        cout << n1 << " nota(s) de R$ 1,00" << endl;
        exit(0);
    }
}

int main()
{

    cin >> n;
    o = n;
    n100 = abs(n / 100);
    n -= n100 * 100;
    imprime();
    n50 = abs(n / 50);
    n -= n50 * 50;
    imprime();
    n20 = abs(n / 20);
    n -= n20 * 20;
    imprime();
    n10 = abs(n / 10);
    n -= n10 * 10;
    imprime();
    n5 = abs(n / 5);
    n -= n5 * 5;
    imprime();
    n2 = abs(n / 2);
    n -= n2 * 2;
    n1 = abs(n);
    n -= n1;
    imprime();
}