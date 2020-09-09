#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf(" %d", &n);
    getchar();

    string str;

    while (n--)
    {
        set<string> st;
        string palavra;

        getline(cin, str);
        int sz2 = str.size();
        for (int i = 0; i <= sz2; i++)
        {
            if (str[i] == ' ' || i == sz2)
            {
                palavra[palavra.size()] = '\0';
                //cout << palavra << " PALAVRA " << endl;
                st.insert(palavra);
                palavra = "";
            }
            else
            {
                palavra += str[i];
            }
        }

        int sz = st.size();
        int i = 1;
        for (string a : st)
        {
            cout << a;
            if (i == sz)
                printf("\n");
            else
                printf(" ");

            i++;
        }
    }

    return 0;
}