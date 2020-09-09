#include <bits/stdc++.h>

using namespace std;

map<char, pair<string, int>> mp;
map<string, int> cnt;

const vector<string> explode(const string &s, const char &c)
{
    string buff{""};
    vector<string> v;

    int a = 0;

    for (auto n : s)
    {
        if (n != c)
        {
            buff += n;
            a++;
        }
        else if (n == c && buff != "")
        {
            cnt[buff]++;
            if (mp.count(buff[0]))
            {
                //cout << (a * cnt[buff]) - (cnt[buff] * 2) << " > " << (mp[buff[0]].second * cnt[mp[buff[0]].first]) - (cnt[mp[buff[0]].first] * 2) << endl;
                if ((a * cnt[buff]) - (cnt[buff] * 2) > (mp[buff[0]].second * cnt[mp[buff[0]].first]) - (cnt[mp[buff[0]].first] * 2))
                {
                    mp[buff[0]].first = buff;
                    mp[buff[0]].second = a;

                    //cout << buff << endl;
                }
            }
            else
            {
                if (a > 2)
                {
                    mp[buff[0]].first = buff;
                    mp[buff[0]].second = a;
                    // cout << buff << endl;
                }
            }

            v.push_back(buff);
            buff = "";
            a = 0;
        }
    }

    if (buff != "")
    {
        cnt[buff]++;
        if (mp.count(buff[0]))
        {
            //cout << (a * cnt[buff]) - (cnt[buff] * 2) << " > " << (mp[buff[0]].second * cnt[mp[buff[0]].first]) - (cnt[mp[buff[0]].first] * 2) << endl;
            if ((a * cnt[buff]) - (cnt[buff] * 2) > (mp[buff[0]].second * cnt[mp[buff[0]].first]) - (cnt[mp[buff[0]].first] * 2))
            {
                mp[buff[0]].first = buff;
                mp[buff[0]].second = a;

                //cout << buff << endl;
            }
        }
        else
        {
            if (a > 2)
            {
                mp[buff[0]].first = buff;
                mp[buff[0]].second = a;
            }
        }

        v.push_back(buff);
    }

    return v;
}

int main()
{
    string str;
    while (getline(cin, str) && str != ".")
    {
        mp.clear();
        cnt.clear();

        vector<string> st{explode(str, ' ')};
        int sz = st.size();
        for (int i = 0; i < sz; i++)
        {
            if (i)
                printf(" ");

            if (mp.count(st[i][0]))
            {
                if (mp[st[i][0]].first == st[i])
                {
                    printf("%c.", st[i][0]);
                }
                else
                {
                    cout << st[i];
                }
            }
            else
            {
                cout << st[i];
            }
        }

        printf("\n%d\n", mp.size());
        for (auto a : mp)
        {
            cout << a.first << ". = " << a.second.first << endl;
        }
    }

    return 0;
}