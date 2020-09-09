#include <bits/stdc++.h>

using namespace std;

int N, res, aux;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> aux;
        if (aux != 1)
            res++;
    }

    cout << res << endl;

    return 0;
}
