#include <bits/stdc++.h>

using namespace std;

int qd[600][600];

int main()
{
    int n, x, y;
    scanf(" %d", &n);
    while (n--)
    {
        scanf(" %d %d", &x, &y);

        qd[x][y]++;
        if (qd[x][y] > 1)
        {
            printf("1\n");
            return 0;
        }
    }

    printf("0\n");

    return 0;
}