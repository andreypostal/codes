#include <bits/stdc++.h>

using namespace std;

int al[110];

int main()
{
    int n, d, aux;
    while (scanf(" %d %d", &n, &d) && n && d)
    {
        bool res = false;
        for (int i = 0; i < n; i++)
            al[i] = 0;

        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf(" %d", &aux);
                al[j] += aux;
                if (al[j] >= d)
                    res = true;
            }
        }

        if (res)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}