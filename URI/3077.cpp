#include <bits/stdc++.h>

using namespace std;

int pq[10100];
long int res[10100];

int main()
{
    int n, k;

    scanf(" %d %d", &n, &k);

    int vezes = k / n;
    int resto = k % n;
    long int total = 0;

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &pq[i]);
        total += (long int)pq[i];
    }

    for (int i = 0; i < n; i++)
    {
        res[i] = total * vezes;
        for (int j = 0; j < resto; j++)
            res[i] += pq[((i - j) + n) % n];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", res[i]);
        if (i + 1 != n)
            printf(" ");
    }
    printf("\n");

    return 0;
}