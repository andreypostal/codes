#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int i = 1;
    while (scanf(" %d", &n) != EOF)
    {
        vector<int> ns;

        printf("Caso %d: ", i);
        for (int j = 0; j <= n; j++)
        {
            if (!j)
                ns.push_back(0);

            for (int k = 0; k < j; k++)
                ns.push_back(j);
        }

        int sz = ns.size();

        printf("%d numero", sz);
        if (sz > 1)
            putchar('s');
        putchar('\n');

        int j = 1;
        for (int a : ns)
        {
            printf("%d", a);
            if (j == sz)
                printf("\n");
            else
                printf(" ");

            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}