#include <bits/stdc++.h>

using namespace std;

bool custom(const pair<char, int> a, const pair<char, int> b)
{
    return a.second < b.second;
}

int main()
{
    int t;
    scanf(" %d", &t);
    for (int i = 1; i <= t; i++)
    {
        printf("Caso #%d:\n", i);
        vector<pair<char, int>> consoantes;
        vector<pair<char, int>> vogais;

        char c;

        getchar_unlocked();
        int j = 0;
        while (true)
        {
            c = getchar_unlocked();
            if (c == '\n')
                break;

            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vogais.push_back(make_pair(c, j));
            else
                consoantes.push_back(make_pair(c, j));

            j++;
        }

        int qtde, op, n;
        scanf(" %d", &qtde);

        int updt_vogais = 0;
        int updt_consoantes = 0;

        char prt[10100];
        bool va = false, ca = false;

        while (qtde--)
        {
            scanf(" %d", &op);

            if (op == 0)
            {
                scanf(" %d", &n);
                updt_vogais += n;
            }
            else if (op == 1)
            {
                scanf(" %d", &n);
                updt_consoantes += n;
            }
            else if (op == 2)
            {
                int sz = vogais.size();

                map<int, int> originais;

                if (!va || updt_vogais)
                {
                    for (int k = 0; k < sz; k++)
                    {
                        int novo;
                        int avanco = (updt_vogais % sz);
                        if (avanco + k >= sz)
                            avanco = avanco - sz;

                        novo = (k + avanco) % sz;

                        if (!originais.count(vogais[novo].second))
                        {
                            originais[vogais[novo].second] = vogais[k].second;

                            vogais[k].second = vogais[novo].second;
                        }
                        else
                        {
                            auto aux2 = vogais[k].second;
                            vogais[k].second = originais[vogais[novo].second];
                            originais[vogais[k].second] = aux2;
                        }
                        prt[vogais[k].second] = vogais[k].first;
                    }

                    originais.clear();

                    va = true;
                }

                sz = consoantes.size();
                if (!ca || updt_consoantes)
                {
                    for (int k = 0; k < sz; k++)
                    {
                        int novo;
                        int avanco = (updt_consoantes % sz);
                        if (avanco + k >= sz)
                            avanco = avanco - sz;

                        novo = (k + avanco) % sz;

                        if (!originais.count(consoantes[novo].second))
                        {
                            originais[consoantes[novo].second] = consoantes[k].second;

                            consoantes[k].second = consoantes[novo].second;
                        }
                        else
                        {
                            auto aux2 = consoantes[k].second;
                            consoantes[k].second = originais[consoantes[novo].second];
                            originais[consoantes[k].second] = aux2;
                        }
                        prt[consoantes[k].second] = consoantes[k].first;
                    }

                    ca = true;
                }

                prt[j] = '\0';

                updt_consoantes = 0;
                updt_vogais = 0;

                printf("%s\n", prt);
            }
        }
    }
    return 0;
}