#include <bits/stdc++.h>

using namespace std;

int cont[300];

int main()
{
    int n;
    scanf(" %d", &n);
    getchar();
    string str;

    while (n--)
    {
        getline(cin, str);
        for (int i = 0; i < 300; i++)
            cont[i] = 0;

        int sz = str.size();
        for (int i = 0; i < sz; i++)
            cont[tolower(str[i])]++;

        string saida = "";
        int maior = -1;

        for (int i = 'a'; i <= 'z'; i++)
            if (cont[i] > maior)
                maior = cont[i];

        int foi = 0;
        for (int i = 'a'; i <= 'z'; i++)
        {
            if (foi && cont[i] == maior)
                printf(" ");
            if (cont[i] == maior)
                printf("%c", i);
        }

        printf("\n");
    }

    return 0;
}