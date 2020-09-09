#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int total = 0, n = 0, aux;
    while (getline(cin, str))
    {
        scanf(" %d", &aux);
        getchar();
        total += aux;
        n++;
    }
    printf("%.1f\n", (float)total / (float)n);
    return 0;
}