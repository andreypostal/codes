#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf(" %d", &n);
    float totalP = 0, aux;
    int total = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf(" %f", &aux);
        getchar();
        // cout << aux << endl;
        totalP += aux;

        string str;
        getline(cin, str);

        stringstream stream(str);

        string st;
        int totald = 0;
        while (stream >> st)
            totald++;

        total += totald;

        printf("day %d: %d kg\n", i, totald);
    }
    printf("%.2f kg by day\n", (float)total / (float)n);
    printf("R$ %.2f by day\n", totalP / (float)n);

    return 0;
}