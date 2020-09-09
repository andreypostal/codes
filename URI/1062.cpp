#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, aux;

    while (scanf(" %d", &n) && n)
    {
        while (scanf(" %d", &aux) && aux)
        {
            stack<int> estacao;
            stack<int> espera;
            set<int> st;

            espera.push(aux);
            st.insert(aux);

            for (int i = 1; i < n; i++)
            {
                scanf(" %d", &aux);
                espera.push(aux);
                st.insert(aux);
            }

            bool res = false;

            while (!res)
            {
                /*
                if (espera.size())
                    cout << "Esperando : " << espera.top() << endl;
                if (estacao.size())
                    cout << "Estacao : " << estacao.top() << endl;
                if (st.size())
                    cout << "Prox : " << *(st.end()) << endl;
*/
                if (espera.size() && espera.top() == *(st.end()))
                {
                    st.erase(--st.end());
                    espera.pop();
                }
                else
                {
                    if (!estacao.empty())
                    {
                        if (estacao.top() == *(st.end()))
                        {
                            st.erase(--st.end());
                            estacao.pop();
                        }
                        else if (espera.empty())
                        {
                            break;
                        }
                        else if (estacao.top() > espera.top())
                        {
                            break;
                        }
                        else if (estacao.top() < espera.top())
                        {
                            estacao.push(espera.top());
                            espera.pop();
                        }
                    }
                    else
                    {
                        estacao.push(espera.top());
                        espera.pop();
                    }
                }

                if (st.size() == 0)
                    res = true;
            }

            if (res)
                printf("Yes\n");
            else
                printf("No\n");
        }

        printf("\n");
    }

    return 0;
}