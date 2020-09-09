#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf(" %d", &n);

    string org, str1, str2;
    getline(cin, org);
    for (int i = 1; i <= n; i++)
    {
        printf("Instancia %d\n", i);

        getline(cin, org);
        getline(cin, str1);
        getline(cin, str2);

        int scr1 = 0;
        int scr2 = 0;

        int acerto = 0;

        for (int j = 0; j < org.size(); j++)
        {
            bool ac1 = false;
            bool ac2 = false;
            if (org[j] == str1[j])
            {
                scr1++;
                ac1 = true;
            }
            if (org[j] == str2[j])
            {
                scr2++;
                ac2 = true;
            }

            if (ac2 && !ac1 && !acerto)
                acerto = 2;

            if (ac1 && !ac2 && !acerto)
                acerto = 1;
        }

        if (scr1 > scr2)
        {
            printf("time 1\n");
        }
        else if (scr2 > scr1)
        {
            printf("time 2\n");
        }
        else
        {
            if (acerto == 1)
                printf("time 1\n");
            else if (acerto == 2)
                printf("time 2\n");
            else
                printf("empate\n");
        }
        printf("\n");
    }

    return 0;
}