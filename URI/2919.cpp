#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (scanf(" %d", &n) != EOF)
    {
        int aux;
        vector<int> p;
        for (int i = 0; i < n; i++)
        {
            scanf(" %d", &aux);

            if (!p.empty() && p.back() > aux)
            {
                *(lower_bound(p.begin(), p.end(), aux)) = aux; // substitui primeiro elemento maior ou igual ao valor lido pelo valor lido (minimiza o maximo);
            }
            else if (p.empty() || p.back() < aux)
            {
                p.push_back(aux);
            }
        }

        printf("%d\n", p.size());
    }

    return 0;
}