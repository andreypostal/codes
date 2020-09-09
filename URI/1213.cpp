#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (scanf(" %d", &n) != EOF)
    {
        unsigned long long a = 11;
        unsigned long long t = 10;
        int i = 2;

        while (a && a % n != 0)
        {
            t = (t * 10) % n;
            a = (t + a) % n;
            i++;
        }

        if (n == 1)
            i = 1;

        printf("%d\n", i);
    }

    return 0;
}