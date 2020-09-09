#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, r, g, b;
    string str;

    scanf(" %d", &t);

    for (int i = 1; i <= t; i++)
    {
        printf("Caso #%d: ", i);
        cin >> str;
        scanf(" %d %d %d", &r, &g, &b);
        int mn = min(min(r, g), b);
        int mx = max(max(r, g), b);

        if (str == "mean")
            printf("%d\n", (r + g + b) / 3);
        else if (str == "min")
            printf("%d\n", mn);
        else if (str == "eye")
            printf("%d\n", (int)((0.3 * r) + (0.59 * g) + (0.11 * b)));
        else if (str == "max")
            printf("%d\n", mx);
    }

    return 0;
}