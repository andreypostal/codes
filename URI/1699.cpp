#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, aux;
    unsigned long long sum;
    while (scanf(" %lld", &n) && n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf(" %lld", &aux);
            double a = sqrt(aux);
            if (ceil(a) == floor(a))
                sum += 1;
            else
                sum += 2;
        }

        if (sum % 2 == 0)
            printf("Garen\n");
        else
            printf("Annie\n");
    }

    return 0;
}