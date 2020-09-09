#include <bits/stdc++.h>

using namespace std;

stack<int> p;

int main()
{
    int n, aux, menor = INT_MAX;
    char op[10];

    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %s", op);
        if (!strcmp(op, "PUSH"))
        {
            scanf(" %d", &aux);
            if (aux < menor)
                menor = aux;

            p.push(menor);
        }
        else if (!strcmp(op, "POP"))
        {
            if (p.size() == 0)
                printf("EMPTY\n");
            else
            {
                aux = p.top();
                p.pop();
                if (p.size())
                    menor = p.top();
                else
                    menor = INT_MAX;
            }
        }
        else
        {
            if (p.size() == 0)
                printf("EMPTY\n");
            else
            {
                aux = p.top();
                printf("%d\n", aux);
            }
        }
    }
    return 0;
}