#include <bits/stdc++.h>

using namespace std;

unsigned long long int pd[20];

unsigned long long int fat(unsigned long long int n)
{
    if (pd[n])
        return pd[n];

    if (n == 3)
        return 6;
    if (n == 2)
        return 2;
    if (n == 1)
        return 1;
    if (n == 0)
        return 1;

    return pd[n] = fat(n - 1) * (unsigned long long int)n;
}

int main()
{
    int n;
    scanf(" %d", &n);
    string str;

    while (cin >> str && str != "0")
    {
        printf("%llu\n", fat(str.size()));
    }

    return 0;
}