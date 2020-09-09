#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, r, real;
    char op, c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d %c %d %c %d", &a, &op, &b, &c, &r);
        if (op == '+')
            real = a + b;
        else if (op == 'x')
            real = a * b;
        else
            real = a - b;
        int nr = abs(abs(real) - abs(r));
        if (nr)
        {
            printf("E");
            for (int j = 0; j < nr; j++)
                printf("r");
            printf("ou!\n");
        }
    }
    return 0;
}