#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (scanf(" %d", &n) && n)
    {
        char aux;
        list<int> a, e, b;
        for (int i = 0; i < n; i++)
            scanf(" %c", &aux), a.push_back(aux);

        for (int i = 0; i < n; i++)
            scanf(" %c", &aux), b.push_back(aux);

        while (!b.empty())
        {
            if (!a.empty())
            {
                char ba = a.front();
                a.pop_front();

                e.push_front(ba);
                // cout << "INCLUINDO " << ba << endl;
                putchar('I');
            }

            while (!b.empty() && !e.empty() && b.front() == e.front())
            {
                //cout << "REMOVENDO " << b.front() << endl;
                putchar('R');
                b.pop_front();
                e.pop_front();
            }

            if (!e.empty() && a.empty() && e.front() != b.front())
            {
                printf(" Impossible");
                break;
            }
        }

        putchar('\n');
    }
    return 0;
}