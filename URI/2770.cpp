#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, m, x1, y2;

    while (scanf(" %d %d %d", &x, &y, &m) != EOF)
    {
        for (int i = 0; i < m; i++)
        {
            scanf(" %d %d", &x1, &y2);
            bool res = (x1 <= x && y2 <= y);
            if (!res)
            {
                res = (x1 <= y && y2 <= x);
            }

            if (res)
                printf("Sim\n");
            else
                printf("Nao\n");
        }
    }
}