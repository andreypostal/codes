#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    while (cin >> a)
    {
        for (int i = 0; i <= ceil(a / 2); i++)
        {
            for (int j = 0; j < (a / 2) - i; j++)
                printf(" ");
            for (int j = 0; j < a - (((a / 2) - i) * 2); j++)
                printf("*");
            printf("\n");
        }
        for (int j = 0; j < (a / 2); j++)
            printf(" ");
        printf("*\n");
        for (int j = 0; j < (a / 2) - 1; j++)
            printf(" ");
        printf("***\n");
        printf("\n");
    }
}