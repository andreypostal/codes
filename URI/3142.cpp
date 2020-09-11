#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[15];
    int j = 0;
    while (true)
    {
        j++;
        int sz = 0;
        for (int i = 0; i < 15; i++)
        {
            str[i] = getchar(), sz++;
            if (str[i] == '\n' || str[i] == EOF)
                break;
        }

        if (str[0] == EOF)
            break;

        sz--;
        str[sz] = '\0';

        int sum = 1;

        if (sz == 3)
        {
            sum += (str[0] - 'A' + 1) * 676;
            sum += (str[1] - 'A' + 1) * 26;
            sum += (str[2] - 'A');
        }
        else if (sz == 2)
        {
            sum += (str[0] - 'A' + 1) * 26;
            sum += (str[1] - 'A');
        }
        else
        {
            sum += (str[0] - 'A');
        }

        if (sum > 16384 || sz > 3)
            printf("Essa coluna nao existe Tobias!\n");
        else
            printf("%d\n", sum);
    }

    return 0;
}