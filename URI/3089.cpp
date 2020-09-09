#include <bits/stdc++.h>

using namespace std;

int vt[100000];

int main()
{
    int n;
    while (scanf(" %d", &n) && n)
    {

        for (int i = 0; i < 2 * n; i++)
            scanf(" %d", &vt[i]);

        long long int maior = 0;
        long long int menor = INT_MAX;

        for (int i = 0, j = n * 2 - 1; i < n * 2; i++, j--)
        {
            if (vt[i] + vt[j] > maior)
                maior = vt[i] + vt[j];
            if (vt[i] + vt[j] < menor)
                menor = vt[i] + vt[j];
        }

        cout << maior << " " << menor << endl;
    }
    return 0;
}