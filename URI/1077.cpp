#include <bits/stdc++.h>

using namespace std;

int operador(char str)
{
    if (str == '^')
        return 4;
    if (str == '*' || str == '/')
        return 3;
    if (str == '+' || str == '-')
        return 2;
    if (str == '(' || str == ')')
        return 1;
    return 0;
}

int main()
{
    int t;
    scanf(" %d", &t);
    getchar();
    while (t--)
    {
        list<char> el, op;
        string s;
        cin >> s;
        for (int i = 0; i < s.size() + 1; i++)
        {
            int sig;
            if (i == s.size())
                sig = 1;
            else
                sig = operador(s[i]);

            if (sig)
            {
                if (!op.empty() && operador(op.back()) >= sig && s[i] != '(')
                {
                    while (!el.empty())
                        putchar(el.front()), el.pop_front();

                    while (!op.empty() && op.back() != '(' && operador(op.back()) >= operador(s[i]))
                        putchar(op.back()), op.pop_back();

                    if (!op.empty() && op.back() == '(' && s[i] == ')')
                        op.pop_back();
                }
                if (i < s.size())
                    if (s[i] != ')')
                        op.push_back(s[i]);
            }
            else
                el.push_back(s[i]);

            // cout << "-------- " << i << " ----------" << endl;
            // cout << "OP ";
            // for (auto a : op)
            //     cout << a << " ";
            // cout << endl;
            // cout << "EL ";
            // for (auto a : el)
            //     cout << a << " ";
            // cout << endl;
        }
        while (!op.empty())
            putchar(op.back()), op.pop_back();
        putchar('\n');
    }

    return 0;
}