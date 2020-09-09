#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, m;
    while (scanf(" %d %d %d", &n, &k, &m) && n)
    {
        vector<int> p(n);
        for (int i = 0; i < n; i++)
            p[i] = 1;

        int saiu = 0;
        int a_a = 0;
        int b_a = n - 1;
        while (saiu < n)
        {
            int a, b;
            for (int i = 0, sair = 0; sair < k; i++)
            {
                a = (a_a + i) % n;
                sair += p[a];
            }
            if (saiu + 1 < n)
            {
                for (int i = 0, sair = 0; sair < m; i++)
                {
                    b = (b_a - (i % n) + n) % n;
                    sair += p[b];
                }
            }
            else
                b = -1;

            if (a == b)
            {
                saiu++;
                if (a + 1 < 10)
                    printf("  ");
                else if (a + 1 < 100)
                    printf(" ");
                printf("%d", a + 1);
                p[a] = 0;
            }
            else
            {
                if (saiu + 1 < n)
                {
                    if (a + 1 < 10)
                        printf("  ");
                    else if (a + 1 < 100)
                        printf(" ");
                    printf("%d", a + 1);
                    if (b + 1 < 10)
                        printf("  ");
                    else if (b + 1 < 100)
                        printf(" ");
                    printf("%d", b + 1);
                    p[b] = 0;
                }
                else
                {
                    if (a + 1 < 10)
                        printf("  ");
                    else if (a + 1 < 100)
                        printf(" ");
                    printf("%d", a + 1);
                }
                p[a] = 0;
                saiu += 2;
            }

            if (saiu < n)
                putchar(',');
            a_a = a;
            b_a = b;
        }
        putchar('\n');
    }
    return 0;
}