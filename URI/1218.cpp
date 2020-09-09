#include <bits/stdc++.h>

using namespace std;

map<char, int> mp;
int na;

const vector<string> explode(const string &s, const char &c)
{
    string buff{""};
    vector<string> v;

    int num = -1;
    for (auto n : s)
    {
        if (n != c)
        {
            buff += n;
        }
        else if (n == c && buff != "")
        {
            if (num == -1)
            {
                num = stoi(buff);
            }
            else
            {
                if (num == na)
                    mp[buff[0]]++;
                num = -1;
            }
            buff = "";
        }
    }

    if (buff != "")
    {
        if (num == -1)
        {
            num = stoi(buff);
        }
        else
        {
            if (num == na)
                mp[buff[0]]++;
            num = -1;
        }
        buff = "";
    }

    return v;
}

int main()
{
    int i = 1;
    while (scanf(" %d", &na) != EOF)
    {
        if (i > 1)
            printf("\n");

        getchar();
        mp.clear();
        string str;
        getline(cin, str);

        explode(str, ' ');
        printf("Caso %d:\n", i);
        printf("Pares Iguais: %d\n", mp['F'] + mp['M']);
        printf("F: %d\n", mp['F']);
        printf("M: %d\n", mp['M']);

        i++;
    }
    return 0;
}