#include <bits/stdc++.h>

using namespace std;

int n, c, t;
int pp[100100];

bool good(int s)
{
    int sum = 0;
    int cm = 0;
    long long mx = (long long)t * s;

    for (int i = 0; i < n; i++)
    {
        if (pp[i] > mx)
            return false;

        if (sum + pp[i] > mx)
            cm++, sum = pp[i];
        else
            sum += pp[i];
    }

    return cm < c;
}

int main()
{
    scanf(" %d %d %d", &n, &c, &t);

    for (int i = 0; i < n; i++)
        scanf(" %d", pp + i);

    int l = 1;
    int r = (int)1e9;

    while (r > l)
    {
        int m = (r + l) / 2;
        if (good(m))
            r = m;
        else
            l = m + 1;
    }

    printf("%d\n", l);

    return 0;
}