#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    while (cin >> a)
    {
        int tm = a.length();
        for (int i = 0; i < tm; i++)
        {
            for (int j = 0; j < i; j++)
                printf(" ");
            for (int j = 0; j < tm - i; j++)
            {
                printf("%c", a[j]);
                if (j == tm - i - 1)
                    printf("\n");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}