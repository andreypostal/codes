#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c1[4], c;
    int soma = 0;
    int pares = 0;
    int impares = 0;
    int cont = 0;
    char str[100100];

    while (scanf(" %s", str) != EOF)
    {

        if (cont)
            printf("\n");

        cont++;

        int i, soma = 0, pares = 0, impares = 0;
        for (i = 0; str[i] != '\0'; i++)
        {
            if ((i + 1) % 2 == 0)
                pares += str[i] - '0';
            else
                impares += str[i] - '0';
        }

        soma = pares + impares;
        i--;

        char c1[4] = {str[i - 3], str[i - 2], str[i - 1], str[i]};

        int n = ((c1[0] - '0') * 1000) + ((c1[1] - '0') * 100) + ((c1[2] - '0') * 10) + (c1[3] - '0');
        int k = 0;
        bool b = false;

        if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
        {
            printf("This is leap year.\n");
            b = true;
            k++;
        }
        if (n % 5 == 0 && soma % 3 == 0)
        {
            k++;
            printf("This is huluculu festival year.\n");
        }
        if ((pares - impares) % 11 == 0 && n % 5 == 0 && b)
        {
            printf("This is bulukulu festival year.\n");
        }

        if (!k)
        {
            printf("This is an ordinary year.\n");
        }
    }

    return 0;
}