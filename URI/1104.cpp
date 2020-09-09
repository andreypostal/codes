#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, alice[100200], beatriz[100200], aux;

    while (scanf(" %d %d", &a, &b) && (a || b))
    {
        int c = max(a, b);
        queue<int> tAlice, tBeatriz;

        for (int i = 0; i < 100200; i++)
            alice[i] = beatriz[i] = 0;

        int mn = 100100;
        int mx = -1;

        for (int i = 0; i < a; i++)
            scanf(" %d", &aux),
                alice[aux]++,
                mn = min(mn, aux),
                mx = max(mx, aux);

        for (int i = 0; i < b; i++)
            scanf(" %d", &aux),
                beatriz[aux]++,
                mn = min(mn, aux),
                mx = max(mx, aux);

        for (int i = mn; i <= mx; i++)
            if (alice[i] > 0 && beatriz[i] == 0)
            {
                tAlice.push(i);
                //cout << "Alice troca " << i << endl;
            }

        for (int i = mn; i <= mx; i++)
            if (beatriz[i] > 0 && alice[i] == 0)
            {
                tBeatriz.push(i);
                //cout << "Beatriz troca " << i << endl;
            }

        int r = min(tBeatriz.size(), tAlice.size());

        printf("%d\n", r);
    }

    return 0;
}