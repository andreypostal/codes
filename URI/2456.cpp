#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ant;

    scanf(" %d", &n);
    ant = n;
    char r = 'C';

    for (int i = 0; i < 4; i++)
    {
        scanf(" %d", &n);

        if (i == 0)
        {
            if (n > ant)
                r = 'C';
            else
                r = 'D';
        }
        else
        {

            if (r != 'N')
            {
                if (n > ant)
                {
                    if (r == 'D')
                        r = 'N';
                    else
                        r = 'C';
                }
                else
                {
                    if (r == 'C')
                        r = 'N';
                    else
                        r = 'D';
                }
            }
        }

        ant = n;
    }

    printf("%c\n", r);

    return 0;
}