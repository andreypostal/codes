#include <bits/stdc++.h>

using namespace std;

int paineis, caminhoes, val;
int p[100100];

bool good(int peso)
{
    long long sum = 0;
    int b = 0;
    long long total = 0;

    for (int i = 0; i < paineis; i++)
    {
        if (sum > peso)
            return false;

        total += p[i];
        if (sum + p[i] > peso)
            b++, total -= sum, sum = p[i];
        else
            sum += p[i];
    }

    if (sum <= peso)
        b++, total -= sum;

    return b <= caminhoes && total <= 0;
}

void solve(int t)
{
    scanf(" %d %d %d", &paineis, &caminhoes, &val);
    for (int i = 0; i < paineis; i++)
        scanf(" %d", p + i);

    int l = 0;   // valor bom
    int r = 1e6; // valor ruim

    // for (int i = 0; i < 200; i++)
    // {
    //     cout << i << " " << good(i) << endl;
    // }

    while (r > l + 1)
    {
        int m = (l + r) / 2;

        if (!good(m))
            l = m;
        else
            r = m;

        //cout << "VAL " << m << " BOM " << good(m) << endl;
    }

    printf("%d $%d\n", r, r * caminhoes * val);

    // if (t == 10000 - 3)
    // {
    //     cout << " -------" << endl;
    //     cout << paineis << " " << caminhoes << " " << val << endl;
    //     for (int i = 0; i < paineis; i++)
    //         cout << p[i] << " ";
    //     cout << endl;
    //     exit(0);
    // }
}

int main()
{
    int t;
    scanf(" %d", &t);
    while (t--)
        solve(t);
    return 0;
}