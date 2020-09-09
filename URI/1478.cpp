#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (scanf(" %d", &n) && n)
    {
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = i; j >= 0; j--)
            {
                string esp = "  ";
                if (j + 1 >= 10)
                    esp = " ";
                if (j + 1 >= 100)
                    esp = "";
                cout << esp;
                cout << j + 1;
                if (cnt + 1 != n)
                    cout << " ";
                cnt++;
            }
            for (int j = 1; j < n - i; j++)
            {
                string esp = "  ";
                if (j + 1 >= 10)
                    esp = " ";
                if (j + 1 >= 100)
                    esp = "";
                cout << esp;
                cout << j + 1;
                if (cnt + 1 != n)
                    cout << " ";
                cnt++;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}