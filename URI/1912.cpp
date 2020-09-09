#include <bits/stdc++.h>

using namespace std;

int n, a;
int p[100100];

bool good(double x)
{
    double sum = 0;

    for (int i = 0; i < n; i++)
        sum += max((double)p[i] - x, 0.0);

    return sum >= a;
}

int main()
{
    while (scanf(" %d %d", &n, &a) && n)
    {
        for (int i = 0; i < n; i++)
            scanf(" %d", p + i);

        double l = -1;  // valor bom
        double r = 1e9; // valor ruim

        for (int i = 0; i < 53; i++)
        {
            double m = (l + r) / 2.;

            if (good(m))
                l = m;
            else
                r = m;
        }

        if (l - 0.00001 > 0 && r > 0)
            printf("%.4lf\n", l);
        else if (r > 0)
            printf(":D\n");
        else
            printf("-.-\n");
    }

    return 0;
}