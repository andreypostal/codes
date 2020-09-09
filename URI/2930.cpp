#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    if (n1 > n2)
        cout << "Eu odeio a professora!" << endl;
    else if (n2 - n1 >= 3)
        cout << "Muito bem! Apresenta antes do Natal!" << endl;
    else
    {
        cout << "Parece o trabalho do meu filho!" << endl;
        if (n1 + 2 < 24)
            cout << "TCC Apresentado!" << endl;
        else
            cout << "Fail! Entao eh nataaaaal!" << endl;
    }
    return 0;
}