#include <bits/stdc++.h>

using namespace std;

double n, l, b, B, h;
double pi = acos((double)-1);

double vol(double x)
{
    double R = b + ((B - b) / h) * x;
    return ((pi * x) / 3.0) * (R * R + R * b + b * b);
}

bool good(double alt)
{
    return (n * vol(alt) <= l);
}

void solve(int t)
{
    scanf(" %lf %lf %lf %lf %lf", &n, &l, &b, &B, &h);

    double l = 0;   // bom (todos os copos enchem)
    double r = 1e9; // ruim (nenhum copo enche);

    for (int i = 0; i < 100; i++)
    {
        double m = (l + r) / 2;
        if (good(m))
            l = m;
        else
            r = m;

        //cout << i << " " << l << " VOL " << vol(l) << endl;
    }

    printf("%.2lf\n", l);
}

int main()
{
    int t;
    scanf(" %d", &t);
    while (t--)
        solve(t);
    return 0;
}