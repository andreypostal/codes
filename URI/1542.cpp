#include <bits/stdc++.h>

using namespace std;

int q, d, p;

int main()
{
    while (scanf(" %d", &q) && q)
    {
        scanf(" %d %d", &d, &p);

        int r = floor(((float)p * (float)d) / (((float)p / (float)q) - 1));

        if (r == 1 || r == -1)
            printf("%d pagina\n", r);
        else
            printf("%d paginas\n", r);
    }

    return 0;
}