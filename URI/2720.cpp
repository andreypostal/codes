#include <bits/stdc++.h>

using namespace std;

struct CustomCompare
{
    bool operator()(const pair<int, int> a1, const pair<int, int> a2)
    {
        if (a1.first < a2.first)
            return true;
        else if (a1.first > a2.first)
            return false;
        else if (a1.second > a2.second)
            return true;

        return false;
    }
};

int main()
{
    int t, k, n, id, m1, m2, m3;
    scanf(" %d", &t);
    while (t--)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, CustomCompare> p;
        scanf(" %d %d", &n, &k);
        while (n--)
        {
            scanf(" %d %d %d %d", &id, &m1, &m2, &m3);
            p.push(make_pair(m1 * m2 * m3, id));
        }
        set<int> res;
        while (k--)
        {
            int r = p.top().second;
            p.pop();
            res.insert(r);
        }
        int i = 0;
        for (int a : res)
        {
            if (i)
                printf(" ");
            else
                i++;

            printf("%d", a);
        }
        printf("\n");
    }

    return 0;
}