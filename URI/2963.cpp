#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, carlos, aux;
    scanf(" %d", &n);
    scanf(" %d", &carlos);
    n--;
    while (n--)
    {
        scanf(" %d", &aux);
        if (aux > carlos)
        {
            printf("N\n");
            return 0;
        }
    }

    printf("S\n");
    return 0;
}