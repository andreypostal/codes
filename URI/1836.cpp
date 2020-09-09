#include <bits/stdc++.h>

#define MAXN 110

using namespace std;

int hp(int iv, int b, int ev, int lv)
{
    return (((iv + b + (sqrt(ev) / 8) + 50) * lv) / 50) + 10;
}

int s(int iv, int b, int ev, int lv)
{
    return ((iv + b + (sqrt(ev) / 8)) * lv / 50) + 5;
}

int main()
{
    int t, nivel, a, b, c;
    scanf(" %d", &t);
    string str;

    for (int i = 1; i <= t; i++)
    {
        cin >> str;
        scanf(" %d", &nivel);
        cout << "Caso #" << i << ": " << str << " nivel " << nivel << endl;
        scanf(" %d %d %d", &a, &b, &c);
        printf("HP: %d\n", hp(b, a, c, nivel));
        scanf(" %d %d %d", &a, &b, &c);
        printf("AT: %d\n", s(b, a, c, nivel));
        scanf(" %d %d %d", &a, &b, &c);
        printf("DF: %d\n", s(b, a, c, nivel));
        scanf(" %d %d %d", &a, &b, &c);
        printf("SP: %d\n", s(b, a, c, nivel));
    }
    return 0;
}