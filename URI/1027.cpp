#include <bits/stdc++.h>

using namespace std;

map<int, priority_queue<int, vector<int>, greater<int>>> pt;
map<int, int> ex;

int count(priority_queue<int, vector<int>, greater<int>> first, priority_queue<int, vector<int>, greater<int>> second, int atual)
{
    if (second.size() == 0)
        return 1;

    int comp = second.top();
    second.pop();

    if (comp > atual)
    {
        return 1 + count(second, first, comp);
    }

    return count(first, second, atual);
}

int main()
{
    int n, x, y;

    while (scanf(" %d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf(" %d %d", &x, &y);
            pt[y].push(x);
            ex[y] = 1;
        }

        int res = 0;

        for (auto a : pt)
        {
            if (ex[a.first + 2])
            {
                auto na = a.second;
                auto nb = pt[a.first + 2];
                int tp = na.top();
                na.pop();

                res = max(res, count(na, nb, tp));

                tp = nb.top();
                nb.pop();

                res = max(res, count(nb, a.second, tp));
            }
        }

        pt.clear();
        ex.clear();

        cout << max(res, 1) << endl;
    }

    return 0;
}