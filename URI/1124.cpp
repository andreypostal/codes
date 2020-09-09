#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;
    while (scanf(" %d %d %d %d", &a, &b, &c, &d) && a && b && c && d)
    {

        int na = a - (c + d);
        int nb = b - (c + d);
        int dd = d * 2, dc = c * 2;

        if (min(a, b) < max(dd, dc))
            printf("N\n");
        else if (na * na + nb * nb >= (c + d) * (c + d))
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}