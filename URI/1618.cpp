#include <bits/stdc++.h>

using namespace std;

int pt[12][2];

float dist(int ax, int ay, int bx, int by)
{
    return sqrt((bx - ax) * (bx - ax) + (bx - by) * (bx - by));
}

int main()
{
    int n;

    scanf(" %d", &n);

    while (n--)
    {
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 2; j++)
                scanf(" %d", &pt[i][j]);

        if (pt[0][0] > pt[4][0] || pt[4][0] > pt[1][0] || pt[4][1] > pt[2][1] || pt[4][1] < pt[1][1])
            printf("0\n");
        else
            printf("1\n");
    }

    return 0;
}