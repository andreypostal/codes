#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, ant = 0, cnt = 0, aux;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &aux);

        if (aux > ant)
            cnt++;

        ant = aux;
    }

    printf("%d\n", cnt);
    return 0;
}