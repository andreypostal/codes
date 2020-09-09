#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, w, h, x, y, nivel, mx, my;

    scanf(" %d", &t);

    string str;

    while (t--)
    {
        scanf(" %d %d %d %d", &w, &h, &x, &y);
        cin >> str;
        scanf(" %d %d %d", &nivel, &mx, &my);

        int raio, dano = 0;

        if (str == "fire")
        {
            if (nivel == 1)
                raio = 20;
            else if (nivel == 2)
                raio = 30;
            else if (nivel == 3)
                raio = 50;
            dano = 200;
        }
        else if (str == "water")
        {
            if (nivel == 1)
                raio = 10;
            else if (nivel == 2)
                raio = 25;
            else if (nivel == 3)
                raio = 40;
            dano = 300;
        }
        else if (str == "earth")
        {
            if (nivel == 1)
                raio = 25;
            else if (nivel == 2)
                raio = 55;
            else if (nivel == 3)
                raio = 70;
            dano = 400;
        }
        else if (str == "air")
        {
            if (nivel == 1)
                raio = 18;
            else if (nivel == 2)
                raio = 38;
            else if (nivel == 3)
                raio = 60;
            dano = 100;
        }

        bool atingiu = false;

        for (int i = y; i <= y + h; i++)
        {
            float dist = sqrt((i - my) * (i - my) + (mx - x) * (mx - x));
            float dist2 = sqrt((i - my) * (i - my) + (mx - x - w) * (mx - x - w));

            if (dist <= raio || dist2 <= raio)
                atingiu = true;
        }

        for (int i = x; i <= x + w; i++)
        {
            float dist = sqrt((i - mx) * (i - mx) + (my - y) * (my - y));
            float dist2 = sqrt((i - mx) * (i - mx) + (my - y - h) * (my - y - h));

            if (dist <= raio || dist2 <= raio)
                atingiu = true;
        }

        if (my <= y + h && my >= y && mx <= x + w && mx >= x)
            atingiu = true;

        if (atingiu)
            printf("%d\n", dano);
        else
            printf("0\n");
    }

    return 0;
}