#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, r, mg[100100], aux;

    while (scanf(" %d %d", &n, &r) != EOF)
    {
        for (int i = 0; i <= n; i++)
            mg[i] = 0;
        for (int i = 0; i < r; i++)
        {
            scanf(" %d", &aux);
            mg[aux] = 1;
        }

        int t = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!mg[i])
            {
                t++;
                printf("%d ", i);
            }
        }

        if (!t)
            printf("*");

        printf("\n");
    }

    return 0;
}