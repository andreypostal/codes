#include <bits/stdc++.h>

using namespace std;

#define MAX 213
#define MAXC 12

struct crianca
{
    char nome[MAXC];
    int atual = -1, pref[MAX], ind_atual = -1;

    void setNome(char _nome[MAXC])
    {
        strcpy(nome, _nome);
    }
};

struct lobo
{
    char nome[MAXC];
    int atual = -1, pref[MAX], id;

    void setNome(char _nome[MAXC])
    {
        strcpy(nome, _nome);
    }
};

crianca c[MAX];
lobo l[MAX];

bool recebe(int lb, int cr)
{
    c[cr].ind_atual++;

    if (l[lb].atual == -1 || l[lb].pref[l[lb].atual] > l[lb].pref[cr])
    {
        if (l[lb].atual != -1)
            c[l[lb].atual].atual = -1;

        l[lb].atual = cr;
        c[cr].atual = lb;
        return true;
    }

    return false;
}

int main()
{
    map<string, int> al; //aux lobos
    map<string, int> ac; //aux crianças

    int n;
    char aux[MAXC];
    scanf(" %d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %s", aux);
        c[i].setNome(aux);
        ac[string(aux)] = i;

        for (int j = 0; j < n; j++)
        {
            scanf(" %s", aux);

            int ind = j;
            if (!i)
            {
                l[j].setNome(aux);
                al[string(aux)] = j;
                l[j].id = j;
            }
            else
                ind = al[string(aux)];

            c[i].pref[j] = ind;
        }
    }

    for (int i = 0; i < n; i++)
    {
        scanf(" %s", aux);
        int ind = al[string(aux)];

        for (int j = 0; j < n; j++)
        {
            scanf(" %s", aux);
            int ind_c = ac[string(aux)];
            l[ind].pref[ind_c] = j;
        }
    }

    bool flag = true;
    while (flag)
    {
        flag = false;
        for (int j = 0; j < n; j++) // j = ind crianca
        {
            int prox_l = c[j].pref[c[j].ind_atual + 1];

            if (c[j].atual == -1)
            {
                flag = true;
                recebe(prox_l, j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s %s\n", c[i].nome, l[c[i].atual].nome);
    }

    return 0;
}