#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    float soma, aux, v[100055];
    while (scanf("%d %d", &a, &b) != EOF)
    {
        soma = 0;
        int testes = (a * 60) / b;
        for (int i = 0; i < testes; i++)
        {
            scanf("%f", &aux);
            soma += aux;
            v[i] = aux;
        }
        float media = soma / testes;
        float res = 0;
        for (int i = 0; i < testes; i++)
        {
            res += (v[i] - media) * (v[i] - media) / (testes - 1);
        }
        printf("%.5f\n", sqrt(res));
    }
    return 0;
}