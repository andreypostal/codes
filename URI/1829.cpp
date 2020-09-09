#include <bits/stdc++.h>

using namespace std;

string rodadas[1010];

float fat(float a)
{

    if (a == 1)
        return log(1);

    if (a == 0)
        return 1;

    return fat(a - 1) + log(a);
}

int main()
{
    int a, b, n, d, lucas = 0, pedro = 0;
    char c;
    scanf(" %d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf(" %d %c %d", &a, &c, &b);
        scanf(" %d %c", &d, &c);

        float ne = b * log(a);
        float nf = fat((float)d);

        if (ne > nf)
        {
            rodadas[i] = "Lucas";
            lucas++;
        }
        else if (nf > ne)
        {
            rodadas[i] = "Pedro";
            pedro++;
        }
    }

    if (lucas == pedro)
        printf("A competicao terminou empatada!\n");
    else if (lucas > pedro)
        printf("Campeao: Lucas!\n");
    else
        printf("Campeao: Pedro!\n");

    for (int i = 1; i <= n; i++)
    {
        cout << "Rodada #" << i << ": " << rodadas[i] << " foi o vencedor" << endl;
    }

    return 0;
}