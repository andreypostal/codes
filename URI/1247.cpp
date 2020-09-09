#include <bits/stdc++.h>

using namespace std;

int main()
{
    double d, vf, vg;
    while (scanf("%lf %lf %lf", &d, &vf, &vg) != EOF)
    {
        double tf = 12 / vf;
        double tg = hypotl(12, d) / vg;
        if (tf >= tg)
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}