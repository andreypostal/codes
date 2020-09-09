#include <bits/stdc++.h>

using namespace std;

unsigned c[100100];
unsigned n, f;

unsigned dias(unsigned esq, unsigned dir)
{
    if (esq >= dir)
        return esq;

    unsigned p = (esq + dir) / 2;

    unsigned r = 0;

    for (int i = 0; i < n; i++)
        r += floor(p / c[i]);

    //cout << r << " r " << endl;

    if (r >= f)
        return dias(esq, p);

    return dias(p + 1, dir);
}

int main()
{
    scanf(" %u %u", &n, &f);
    for (int i = 0; i < n; i++)
        scanf(" %u", &c[i]);

    printf("%u\n", dias(1, 100000000));

    return 0;
}