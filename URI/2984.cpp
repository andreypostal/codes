#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        cnt = max(cnt + ((s[i] == ')') ? -1 : 1), 0);

    if (cnt)
        printf("Ainda temos %d assunto(s) pendente(s)!\n", cnt);
    else
        printf("Partiu RU!\n");

    return 0;
}