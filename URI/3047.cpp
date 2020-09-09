#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    scanf(" %d %d %d", &a, &b, &c);
    int d = (a - b - c);
    printf("%d\n", max(max(c, b), d));
    return 0;
}