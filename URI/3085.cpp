#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, x, y, yi, xi;
    char d;

    scanf(" %d %d %d %d", &n, &k, &x, &y);
    yi = 0;
    xi = 0;

    stack<char> pilha;

    double dist = sqrt((xi - x) * (xi - x) + (yi - y) * (yi - y));
    if (dist > k)
    {
        printf("Trap 1\n");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &d);

        if (d == 'C')
            yi++;
        if (d == 'B')
            yi--;
        if (d == 'E')
            xi--;
        if (d == 'D')
            xi++;

        double dist = sqrt((xi - x) * (xi - x) + (yi - y) * (yi - y));

        //cout << xi << " " << yi << " = " << dist << endl;

        if (dist >= k)
        {
            printf("Trap %d\n", i + 2);
            return 0;
        }
    }

    dist = sqrt((xi - x) * (xi - x) + (yi - y) * (yi - y));
    if (dist > 0)
    {
        printf("Trap %d\n", n);
        return 0;
    }

    printf("Sucesso\n");

    return 0;
}