#include <bits/stdc++.h>

using namespace std;

int n;
list<int> l;

int main()
{
    while (scanf("%d", &n))
    {
        if (n == 0)
            break;
        for (int i = 1; i <= n; i++)
        {
            l.push_back(i);
        }
        cout << "Discarded cards: ";
        while (l.size() > 1)
        {
            cout << l.front();
            l.pop_front();
            if (l.size() >= 2)
                cout << ", ";
            l.push_back(l.front());
            l.pop_front();
        }
        cout << endl;
        cout << "Remaining card: " << l.front() << endl;

        l.clear();
    }

    return 0;
}
