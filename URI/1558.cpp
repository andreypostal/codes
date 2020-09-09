#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (scanf(" %d", &n) != EOF)
    {
        if (n < 0)
            printf("NO\n");
        else
        {
            int sq = sqrt(n);
            bool res = false;
            for (int i = 0; i <= sq && !res; i++)
                for (int j = 0; j <= sq && !res; j++)
                    if (i * i + j * j == n)
                        res = true;

            if (res)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

    return 0;
}