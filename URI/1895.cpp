#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, l, aux, A = 0, B = 0;
    cin >> n >> t >> l;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> aux;
        if (abs(aux - t) <= l)
        {
            if (i % 2 == 0)
                A += abs(aux - t);
            else
                B += abs(aux - t);
            t = aux;
        }
    }

    cout << A << " " << B << endl;

    return 0;
}
