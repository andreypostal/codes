#include <bits/stdc++.h>

using namespace std;

struct P
{
    string nome;
    char r;
    int dist;

    P(string n, int re, int d)
    {
        r = re;
        nome = n;
        dist = d;
    }
};

bool custom(const P a, const P b)
{
    if (a.dist < b.dist)
        return true;
    if (a.dist > b.dist)
        return false;
    if (a.r > b.r)
        return false;
    if (a.r < b.r)
        return true;

    return a.nome < b.nome;
}

int main()
{
    int n;
    while (scanf(" %d", &n) != EOF)
    {
        string nome;
        char r;
        int dist;
        vector<P> p;
        for (int i = 0; i < n; i++)
        {
            cin >> nome >> r >> dist;
            p.push_back(*(new P(nome, r, dist)));
        }
        sort(p.begin(), p.end(), custom);

        for (int i = 0; i < n; i++)
            cout << p[i].nome << endl;
    }

    return 0;
}