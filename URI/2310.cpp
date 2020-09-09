#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s, b, a, ts = 0, tb = 0, ta = 0, tss = 0, tsb = 0, tsa = 0;
    scanf(" %d", &n);
    char str[100100];
    for (int i = 0; i < n; i++)
    {
        scanf(" %s %d %d %d", str, &s, &b, &a);
        ta += a;
        tb += b;
        ts += s;
        scanf(" %d %d %d", &s, &b, &a);
        tsa += a;
        tsb += b;
        tss += s;
    }

    cout << ts << " " << ta << " " << tb << endl;

    float pct_s = (float)tss * 100. / (float)ts;
    float pct_a = (float)tsa * 100. / (float)ta;
    float pct_b = (float)tsb * 100. / (float)tb;

    printf("Pontos de Saque: %.2f %c.\nPontos de Bloqueio: %.2f %c.\nPontos de Ataque: %.2f %c.\n", pct_s, '%', pct_b, '%', pct_a, '%');

    return 0;
}