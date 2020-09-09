#include <bits/stdc++.h>

#define SIZE 400005

using namespace std;

int t[SIZE];

int main()
{
    int N, K, aux, a, b;
    char op;
    while (scanf("%d %d", &N, &K) != EOF)
    {
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &aux);
            if (aux > 0)
                aux = 1;
            else if (aux < 0)
                aux = -1;
            else
                aux = 0;
            update(1, 1, N, i + 1, aux);
        }

        for (int i = 0; i < K; i++)
        {
            cin >> op >> a >> b;
            if (op == 'C')
            {
                update(1, 1, N, a, b);
            }
            else
            {
                int res = query(1, 1, N, a, b);
                if (res < 0)
                    printf("-");
                else if (res > 0)
                    printf("+");
                else
                    printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}