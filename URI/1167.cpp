#include <bits/stdc++.h>

using namespace std;

struct P
{
    string nome;
    int valor;
    P(string n, int v)
    {
        nome = n;
        valor = v;
    }
};

int main()
{
    int n;
    while (scanf(" %d", &n) && n)
    {
        vector<P> p;
        string aux;
        int v;
        for (int i = 0; i < n; i++)
        {
            cin >> aux >> v;
            p.push_back(*(new P(aux, v)));
        }

        int val = p[0].valor;
        int jg = n;
        int atual = 0;
        int dir = (val % 2 != 0) ? 1 : -1;
        if (dir == -1)
            atual = n;
        while (jg > 1)
        {
            for (int i = 0; i < val; i++)
            {
                atual = atual + dir;

                if (atual >= n)
                    atual = 0;
                else if (atual < 0)
                    atual = n - 1;

                if (!p[atual].valor)
                    i = max(i - 1, -1);

                //cout << atual << " " << p[atual].nome << " Val " << p[atual].valor << " i " << i << endl;
            }

            //cout << p[atual].nome << " ELIMINADO" << endl;

            val = p[atual].valor;
            p[atual].valor = 0;
            jg--;
            dir = (val % 2 != 0) ? 1 : -1;
            bool mudou = false;
            //cout << " JG " << jg << endl;
        }

        string a = "";
        for (int i = 0; i < n && a == ""; i++)
            if (p[i].valor > 0)
                a = p[i].nome;

        cout << "Vencedor(a): " << a << endl;
    }
    return 0;
}