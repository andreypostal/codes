#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b)
{
    int rest = a % b;
    while (rest)
    {
        a = b;
        b = rest;
        rest = a % b;
    }

    return b;
}

int main()
{
    int x, y, z;

    while (scanf(" %d %d %d", &x, &y, &z) != EOF)
    {
        bool pit = ((x * x) == (y * y + z * z)) || ((y * y) == (x * x + z * z)) || ((z * z) == (x * x + y * y));
        bool prim = false;
        if (pit)
            if (mdc(mdc(x, y), z) == 1)
                prim = true;

        if (!pit)
            printf("tripla\n");
        else if (prim)
            printf("tripla pitagorica primitiva\n");
        else
            printf("tripla pitagorica\n");
    }
    return 0;
}