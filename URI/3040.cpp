#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, h, d, g;
    scanf(" %d", &c);
    while (c--)
    {
        scanf(" %d %d %d", &h, &d, &g);

        if (h >= 200 && h <= 300)
            if (d >= 50)
                if (g >= 150)
                {
                    printf("Sim\n");
                    continue;
                }
        printf("Nao\n");
    }

    return 0;
}