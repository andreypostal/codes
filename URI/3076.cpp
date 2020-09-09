#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (scanf(" %d", &n) != EOF)
    {
        int sec = (n / 100) + 1;
        if (n % 100 == 0)
            sec = floor(n / 100);

        printf("%d\n", sec);
    }

    return 0;
}