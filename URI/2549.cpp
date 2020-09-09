#include "bits/stdc++.h"
using namespace std;

set<string> st;

int main()
{
    int n, ano;

    while (scanf(" %d %d", &n, &ano) != EOF)
    {
        st.clear();
        getchar();
        int total = 0;
        char ch;
        for (int j = 0; j < n; j++)
        {

            int i = 0;
            string sigla("");
            while (ch = getchar())
            {
                if (ch == '\n' || ch == EOF)
                    break;
                //cout << ch << endl;
                if (ch == ' ')
                {
                    i = 0;
                }
                else
                {
                    if (i == 0)
                    {
                        sigla += ch;
                    }
                    i++;
                }
            }

            //cout << sigla << endl;

            if (st.find(sigla) != st.end())
                total++;
            else
                st.insert(sigla);
        }

        printf("%d\n", total);
    }

    return 0;
}