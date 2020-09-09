#include <bits/stdc++.h>

using namespace std;

pair<int, int> mt[50][50];
int cob = -2;
int mina = -1;
bool possivel = true;

queue<pair<int, int>> analisar;

int N, M, K;

pair<int, int> adj[8] = {{0, 1}, {0, -1}, {1, 0}, {1, 1}, {1, -1}, {-1, 0}, {-1, 1}, {-1, -1}};

void clear(std::queue<pair<int, int>> &q)
{
    std::queue<pair<int, int>> empty;
    std::swap(q, empty);
}

void checa(int i, int j)
{
    int cobertos = 0, bombas = 0;
    queue<pair<int, int>> f;

    for (auto ad : adj)
    {
        int x = ad.first + i, y = ad.second + j;
        if (x < 0 || x >= N || y < 0 || y >= M)
            continue;

        pair<int, int> p = mt[x][y];
        int n = p.second;
        if (n == cob || p.first == -1)
        {
            cobertos++;
            f.push({x, y});
        }
        if (p.second == mina && p.first == 1)
            bombas++;
    }

    //cout << "ANALISANDO (" << i << "," << j << ") "
    //     << "BOMBAS " << bombas << " COBERTOS " << cobertos << " DICA " << mt[i][j].second << endl;

    if (mt[i][j].second != abs(bombas - cobertos) && mt[i][j].second != abs(bombas + cobertos) && bombas != mt[i][j].second)
    {
        return;
    }

    mt[i][j].first = -5;

    while (!f.empty())
    {
        pair<int, int> c = f.front();
        f.pop();

        if (mt[c.first][c.second].second == mina)
            mt[c.first][c.second] = {1, -1};

        else
            mt[c.first][c.second].second = mt[c.first][c.second].first;
    }

    clear(analisar);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            if (mt[i][j].first != -5)
                analisar.push({i, j});
    }
}

void calculaDica(int i, int j)
{
    int bombas = 0;
    for (auto ad : adj)
    {
        int x = ad.first + i, y = ad.second + j;
        if (x < 0 || x >= N || y < 0 || y >= M)
            continue;
        //cout << x << " vs " << y << endl;
        pair<int, int> p = mt[x][y];
        int n = p.second;
        if (n == mina)
            bombas++;
    }

    if (mt[i][j].second == cob)
        mt[i][j].first = bombas;
}

void printM()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << "(" << mt[i][j].first << "," << mt[i][j].second << ") ";
        }
        cout << endl;
    }
}

int main()
{
    while (scanf(" %d %d %d", &N, &M, &K) && N != 0)
    {

        for (int i = 0; i < N; i++)
        {
            getchar();
            for (int j = 0; j < M; j++)
            {
                char a = getchar() - '0';
                mt[i][j] = {0, a};
                if (a != cob)
                    analisar.push({i, j});
            }
        }

        for (int i = 0; i < K; i++)
        {
            int x, y;
            scanf(" %d %d", &x, &y);
            x--, y--;
            mt[x][y] = {-1, -1};
        }

        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
                calculaDica(i, j);

        //printM();
        while (!analisar.empty() && possivel)
        {
            pair<int, int> p = analisar.front();
            analisar.pop();
            checa(p.first, p.second);
            //printM();
        }

        for (int i = 0; i < N && possivel; i++)
            for (int j = 0; j < M && possivel; j++)
                possivel = !(mt[i][j].first == -1 && mt[i][j].second == -1);

        if (!possivel)
            printf("Impossivel\n");
        else
            printf("Possivel\n");

        clear(analisar);
        possivel = true;
    }
    return 0;
}