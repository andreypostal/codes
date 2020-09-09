#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while (true)
    {
        scanf(" %d", &n);

        if (n == -1)
            break;

        int c = n % 193;

        if (!c)
            printf("Bom\n");
        else
            printf("So o ouro\n");
    }

    return 0;
}