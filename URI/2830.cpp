#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    if (n < 3)
    {
        if (m < 3)
        {
            printf("oitavas\n");
        }
        else if (m < 5)
        {
            printf("quartas\n");
        }
        else if (m < 9)
        {
            printf("semifinal\n");
        }
        else
        {
            printf("final\n");
        }
    }
    else if (n < 5)
    {
        if (m < 3)
        {
            printf("quartas\n");
        }
        else if (m < 5)
        {
            printf("oitavas\n");
        }
        else if (m < 9)
        {
            printf("semifinal\n");
        }
        else
        {
            printf("final\n");
        }
    }
    else if (n < 7)
    {
        if (m < 5)
        {
            printf("semifinal\n");
        }
        else if (m < 7)
        {
            printf("oitavas\n");
        }
        else if (m < 9)
        {
            printf("quartas\n");
        }
        else
        {
            printf("final\n");
        }
    }
    else if (n < 9)
    {
        if (m < 5)
        {
            printf("semifinal\n");
        }
        else if (m < 7)
        {
            printf("quartas\n");
        }
        else if (m < 9)
        {
            printf("oitavas\n");
        }
        else
        {
            printf("final\n");
        }
    }
    else if (n < 11)
    {
        if (m < 9)
        {
            printf("final\n");
        }
        else if (m < 11)
        {
            printf("oitavas\n");
        }
        else if (m < 13)
        {
            printf("quartas\n");
        }
        else
        {
            printf("semifinal\n");
        }
    }
    else if (n < 13)
    {
        if (m < 9)
        {
            printf("final\n");
        }
        else if (m < 11)
        {
            printf("quartas\n");
        }
        else if (m < 13)
        {
            printf("oitavas\n");
        }
        else
        {
            printf("semifinal\n");
        }
    }
    else if (n < 15)
    {
        if (m < 9)
        {
            printf("final\n");
        }
        else if (m < 13)
        {
            printf("semifinal\n");
        }
        else if (m < 15)
        {
            printf("oitavas\n");
        }
        else
        {
            printf("quartas\n");
        }
    }
    else
    {
        if (m < 9)
        {
            printf("final\n");
        }
        else if (m < 13)
        {
            printf("semifinal\n");
        }
        else if (m < 15)
        {
            printf("quartas\n");
        }
        else
        {
            printf("oitavas\n");
        }
    }
    return 0;
}