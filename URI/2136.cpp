#include <bits/stdc++.h>

using namespace std;

vector<pair<string, pair<int, int>>> pt;
map<string, int> prt;

bool ordemPrint(const pair<string, pair<int, int>> a, const pair<string, pair<int, int>> b)
{
    if (a.second.second == b.second.second)
        return a.first < b.first;

    return a.second.second > b.second.second;
}

bool sortAmigo(const pair<string, pair<int, int>> a, const pair<string, pair<int, int>> b)
{
    if (a.second.second && b.second.second)
        if (a.first.size() == b.first.size())
            return a.second.first < b.second.first;
        else
            return a.first.size() > b.first.size();

    return a.second.second > b.second.second;
}

int main()
{
    string nome, op;
    int i = 0;
    while (cin >> nome && nome != "FIM")
    {
        i++;

        cin >> op;
        if (op == "NO")
        {
            if (!prt.count(nome))
            {
                pt.push_back(make_pair(nome, make_pair(i, 0)));
                prt[nome]++;
            }
        }
        else
        {
            if (!prt.count(nome))
            {
                pt.push_back(make_pair(nome, make_pair(i, 1)));
                prt[nome]++;
            }
        }
    }

    sort(pt.begin(), pt.end(), ordemPrint);

    for (auto a : pt)
    {
        cout << a.first << endl;
    }

    sort(pt.begin(), pt.end(), sortAmigo);

    cout << endl
         << "Amigo do Habay:\n"
         << pt[0].first << endl;

    return 0;
}