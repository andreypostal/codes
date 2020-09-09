#include <bits/stdc++.h>

using namespace std;

#define dd pair<double, double>

double min_dist;
vector<dd> p;
vector<dd> t;

double dist(dd a, dd b)
{
    return (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
}

void upd_ans(dd a, dd b)
{
    double d = dist(a, b);
    if (d < min_dist)
        min_dist = d;
}

bool cmp_x(dd a, dd b)
{
    return (a.first < b.first) || (a.first == b.first && a.second < b.second);
}

bool cmp_y(dd a, dd b)
{
    return (a.second < b.second);
}

void brute(int l, int r)
{
    for (int i = l; i < r; i++)
        for (int j = i + 1; j < r; j++)
            upd_ans(p[i], p[j]);

    sort(p.begin() + l, p.begin() + r, cmp_y);
}

void calc(int l, int r)
{
    if (l - r <= 3)
    {
        brute(l, r);
        return;
    }

    int m = (l + r) / 2;
    calc(l, m);
    calc(m, r);

    merge(p.begin() + l, p.begin() + m, p.begin() + m, p.begin() + r, t.begin(), cmp_y); // subproblemas já ordenados
    copy(t.begin(), t.begin() + r - l, p.begin() + l);

    int cnt = 0;
    for (int i = 0; i < r; i++)
    {
        if (abs(p[i].first - p[m].first) < min_dist)
        {                                                                              // para pontos dentro do range da dist min
            for (int j = cnt - 1; j >= 0 && p[i].second - t[i].second < min_dist; j--) // para todos os pontos computador, dentro do range do y
                upd_ans(p[i], t[j]);

            t[cnt] = p[i];
            cnt++;
        }
    }
}

int main()
{
    int n;
    while (scanf(" %d", &n) && n)
    {
        p.clear();
        double aux[2];
        for (int i = 0; i < n; i++)
        {
            scanf(" %lf %lf", aux, aux + 1);
            p.push_back({aux[0], aux[1]});
        }

        t.resize(n);

        sort(p.begin(), p.end(), cmp_x);
        min_dist = 1e20;
        calc(0, n);
        min_dist = sqrt(min_dist);

        if (min_dist >= 1e4)
            printf("INFINITY\n");
        else
            printf("%.4lf\n", min_dist);
    }
    return 0;
}