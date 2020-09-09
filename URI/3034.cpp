#include <bits/stdc++.h>

using namespace std;

int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main()
{
    int n, aux;
    scanf(" %d", &n);
    while (n--)
    {
        scanf(" %d", &aux);
        aux++;
        if (aux % 7 == 0 && aux % 2 != 0 && isPrime(aux + 2))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}