#include <bits/stdc++.h>

using namespace std;

struct Rena
{
    string nome;
    int peso, idade;
    double altura;

    Rena(string n, int p, int i, double a)
    {
        nome = n;
        peso = p;
        idade = i;
        altura = a;
    }
};

bool custom(const Rena &a, const Rena &b)
{
    if (a.peso > b.peso)
        return true;
    if (b.peso > a.peso)
        return false;
    if (a.idade < b.idade)
        return true;
    if (a.idade > b.idade)
        return false;
    if (a.altura < b.altura)
        return true;
    if (a.altura > b.altura)
        return false;

    return a.nome < b.nome;
}

int main()
{
    int t;
    scanf(" %d", &t);
    for (int c = 1; c <= t; c++)
    {
        printf("CENARIO {%d}\n", c);
        int n, m;
        string nome;
        int p, j;
        float a;
        scanf(" %d %d", &n, &m);
        vector<Rena> renas;
        getchar();
        for (int i = 0; i < n; i++)
        {
            cin >> nome >> p >> j >> a;
            renas.push_back(*(new Rena(nome, p, j, a)));
        }

        sort(renas.begin(), renas.end(), custom);
        for (int i = 0; i < m; i++)
        {
            cout << i + 1 << " - " << renas[i].nome << endl;
        }
    }
    return 0;
}