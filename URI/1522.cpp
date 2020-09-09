#include <bits/stdc++.h>

using namespace std;

int p1[110], p2[110], p3[110];
int n;
int pd[110][110][110];

int calc(int a, int b, int c)
{
    a = min(a, n);
    b = min(b, n);
    c = min(c, n);

    if (pd[a][b][c] != -1)
        return pd[a][b][c];

    //cout << a << " " << b << " " << c << endl;

    if (a >= n && b >= n && c >= n)
        return 1;

    if (p1[a] % 3 != 0 && p2[b] % 3 != 0 && p3[c] % 3 != 0 && (p1[a] + p2[b] + p3[c]) % 3 != 0 && (p1[a] + p2[b]) % 3 != 0 && (p1[a] + p3[c]) % 3 != 0 && (p2[b] + p3[c]) % 3 != 0)
        return 0;

    int op1 = 0;
    int op2 = 0;
    int op3 = 0;
    int op4 = 0;
    int op5 = 0;
    int op6 = 0;
    int op7 = 0;

    if (a < n && p1[a] % 3 == 0)
        op1 = calc(a + 1, b, c);
    if (b < n && p2[b] % 3 == 0)
        op2 = calc(a, b + 1, c);
    if (c < n && p3[c] % 3 == 0)
        op3 = calc(a, b, c + 1);
    if (a < n && b < n && (p1[a] + p2[b]) % 3 == 0)
        op4 = calc(a + 1, b + 1, c);
    if (a < n && c < n && (p1[a] + p3[c]) % 3 == 0)
        op5 = calc(a + 1, b, c + 1);
    if (b < n && c < n && (p2[b] + p3[c]) % 3 == 0)
        op6 = calc(a, b + 1, c + 1);
    if (a < n && b < n && c < n && (p1[a] + p2[b] + p3[c]) % 3 == 0)
        op7 = calc(a + 1, b + 1, c + 1);

    return pd[a][b][c] = max(max(max(max(max(max(op1, op2), op3), op4), op5), op6), op7);
}

int main()
{
    while (scanf(" %d", &n) != EOF && n)
    {
        memset(pd, -1, sizeof(pd));

        for (int i = 0; i < n; i++)
            scanf(" %d %d %d", &p1[i], &p2[i], &p3[i]);

        p1[n] = 0;
        p2[n] = 0;
        p3[n] = 0;

        int res = calc(0, 0, 0);

        printf("%d\n", res);
    }

    return 0;
}