#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf(" %d", &n);

    string str;
    getline(cin, str);

    while (n--)
    {
        int a[30], total = 0;
        for (int i = 0; i < 30; i++)
            a[i] = 0;

        getline(cin, str);

        for (int i = 0; i < str.size(); i++)
        {
            if (!a[str[i] - 'a'])
                total++;
            a[str[i] - 'a'] = 1;
        }

        if (total >= 26)
        {
            printf("frase completa\n");
        }
        else if (total >= 13)
        {
            printf("frase quase completa\n");
        }
        else
        {
            printf("frase mal elaborada\n");
        }
    }

    return 0;
}