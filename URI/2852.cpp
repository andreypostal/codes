#include <bits/stdc++.h>

using namespace std;

bool ehConsoante(char a)
{
    return !(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
}

int main()
{
    string msg, chave;
    int n;
    cin >> chave >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        getline(cin, msg);
        int j = 0, sz = chave.size();
        bool crip = ehConsoante(msg[0]);
        int cnt = 0;
        if (msg[0])
            while (msg[j])
            {
                if (j && msg[j - 1] == ' ' && ehConsoante(msg[j]))
                    crip = true;

                if (msg[j] != ' ' && crip)
                {
                    //cout << "CHAVE " << cnt << " X " << chave[(cnt % sz)];
                    int d = chave[(cnt % sz)] - 'a';
                    //cout << " DESLOCAMENTO " << d << endl;
                    int nxt = ((msg[j] + d - 'a') % 26) + 'a';
                    putchar(nxt);
                    cnt++;
                }
                else
                {
                    if (msg[j] == ' ')
                        crip = false;

                    putchar(msg[j]);
                }
                j++;
            }
        putchar('\n');
    }
    return 0;
}