#include <bits/stdc++.h>

#define MAXN 110

using namespace std;

int main()
{
    float amen, branco, leite;
    int i = 0;
    while (scanf(" %f %f %f", &amen, &branco, &leite) != EOF && (amen || branco || leite))
    {
        i++;
        amen *= 1000;
        branco *= 1000;
        leite *= 1000;

        int croc = round(amen / 5.);
        leite -= croc * 20;
        branco -= croc * 25;

        int misto = round(branco / 25.);
        leite -= misto * 25;

        int trad = round(leite / 50.);

        int sortida = round(trad / 10.);
        misto -= sortida * 10;
        croc -= sortida * 10;

        int pred = round(misto / 20.);

        croc -= pred * 10;

        int esp = round(croc / 30.);

        printf("Caso #%d: %d Especial, %d Predileta e %d Sortida\n", i, esp, pred, sortida);
    }
    return 0;
}