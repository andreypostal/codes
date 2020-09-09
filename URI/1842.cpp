#include <bits/stdc++.h>

#define MAXN 100100

using namespace std;

int tab[20][MAXN];
int sa[MAXN], maior, ind;
string s, atual;
vector<int> stk;

struct Tupla
{
    int f, s, i;
} t[MAXN];

bool cmp(Tupla a, Tupla b)
{
    if (a.f == b.f)
        return a.s < b.s;
    return a.f < b.f;
}

void calcSa(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        tab[0][i] = s[i] - 'a';
    }

    int stp, cnt = 1;
    for (stp = 1; cnt < n; stp++)
    {

        for (int i = 0; i < n; i++)
        {
            t[i].i = i;
            t[i].f = tab[stp - 1][i];
            t[i].s = i + cnt < n ? tab[stp - 1][i + cnt] : -1;
        }

        sort(t, t + n, cmp);

        for (int i = 0; i < n; i++)
        {
            tab[stp][t[i].i] = i > 0 && t[i].f == t[i - 1].f && t[i].s == t[i - 1].s ? tab[stp][t[i - 1].i] : i;
        }

        cnt <<= 1;
    }

    stp--;
    for (int i = 0; i < n; i++)
    {
        sa[tab[stp][i]] = i;
    }

    maior = 2;
    ind = -1;

    for (int i = 1; i < n; i++)
    {
        int j = sa[i - 1];
        int k = sa[i];
        int lcp = 0;
        for (int st = stp; st >= 0; st--)
        {
            if (j >= n || k >= n)
                break;
            if (tab[st][j] == tab[st][k])
            {
                int p = 1 << st;
                lcp += p;
                j += p;
                k += p;
            }
        }

        if (lcp > maior)
        {
            //cout << " ANTES " << atual << " " << maior << endl;
            maior = lcp;
            ind = sa[i - 1];
            //cout << " DEPOIS " << atual << " " << maior << endl;
        }
    }
}

int main()
{
    cin >> s;

    int n = s.length();

    calcSa(s, n);

    if (maior == 2)
    {
        printf("*\n");
    }
    else
    {
        string pl = s.substr(ind, maior);
        cout << pl << endl;
    }

    return 0;
}
