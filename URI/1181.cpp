#include <bits/stdc++.h>

using namespace std;

int main()
{
    float soma = 0, mult = 1, aux;
    int a;
    char b;
    cin >> a >> b;
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
        {
            cin >> aux;
            if (i == a)
            {
                soma += aux;
            }
        }

    if (b == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma / 12);

    return 0;
}