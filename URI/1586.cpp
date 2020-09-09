#include <bits/stdc++.h>

using namespace std;

char nomes[100100][15];
int n;

unsigned long long int forca(int i)
{
    unsigned long long int total = 0;
    for (int j = i + 1; j < n; j++)
    {
        unsigned long long int fc = 0;
        for (int k = 0; nomes[j][k] != '\0'; k++)
            fc += nomes[j][k];

        //cout << nomes[i] << " x " << fc << " mp " << (i - j + 1) << endl;

        total += (j - i) * fc;
    }

    return total;
}

unsigned long long int aForca(int i)
{
    unsigned long long int total = 0;
    //cout << " --- %%%%%%%%%%%%%% --- " << endl;
    for (int j = i; j >= 0; j--)
    {
        unsigned long long int fc = 0;
        for (int k = 0; nomes[j][k] != '\0'; k++)
            fc += nomes[j][k];

        //cout << nomes[i] << " x " << fc << " mp " << (i - j + 1) << endl;
        total += (i - j + 1) * fc;
    }
    // cout << " --- %%%%%%%%%%%%%% --- " << endl;

    return total;
}

int busca(int esq, int dir)
{
    if (esq >= dir)
        return -1;

    int k = (esq + dir) / 2;

    unsigned long long int fe = aForca(k);
    unsigned long long int fd = forca(k);

    //cout << k << " k " << endl;

    /*cout << " i = " << i << endl;
    cout << fe << " fe " << endl;
    cout << fd << " fd " << endl;
    cout << " ----------- " << endl;*/
    //cout << esq << " x " << dir << " " << k << endl;

    if (fe == fd)
        return k;

    if (fe > fd)
    {
        return busca(esq, k - 1);
    }

    return busca(k + 1, dir);
}

int main()
{
    string str;
    while (scanf(" %d", &n) && n)
    {
        getline(cin, str);
        for (int i = 0; i < n; i++)
        {
            str = "";
            int f = 0;
            for (int j = 0; j < 11; j++)
            {
                char a = getchar();

                nomes[i][j] = a;

                if (a == '\n')
                {
                    nomes[i][j] = '\0';
                    break;
                }

                f += a;
                str += a;
            }
        }

        int r = busca(0, n - 1);

        if (r < 0)
            printf("Impossibilidade de empate.\n");
        else
            printf("%s\n", nomes[r]);
    }
    return 0;
}