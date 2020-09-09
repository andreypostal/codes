#include <bits/stdc++.h>

using namespace std;

bool vencedor(string st1, string st2)
{
    if (st1 == "pedra" && st2 == "tesoura")
        return true;
    if (st1 == "tesoura" && st2 == "papel")
        return true;
    if (st1 == "papel" && st2 == "pedra")
        return true;

    return false;
}

int main()
{
    string st1, st2, st3;

    while (cin >> st1 >> st2 >> st3)
    {
        if (vencedor(st1, st2) && vencedor(st1, st3))
            printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
        else if (vencedor(st2, st1) && vencedor(st2, st3))
            printf("Iron Maiden's gonna get you, no matter how far!\n");
        else if (vencedor(st3, st1) && vencedor(st3, st2))
            printf("Urano perdeu algo muito precioso...\n");
        else
            printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
    }

    return 0;
}