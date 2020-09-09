#include <bits/stdc++.h>

using namespace std;

typedef struct No
{
    char val;
    struct No *dir;
    struct No *esq;
} No;

int N, i;

bool pesquisa(No *r, char v)
{
    if (!r)
        return false;

    if (r->val == v)
        return true;

    if (r->val > v)
        return pesquisa(r->esq, v);

    return pesquisa(r->dir, v);
}

void insere(No **r, char v)
{
    if (!*r)
    {
        *r = (No *)malloc(sizeof(No));
        (*r)->dir = NULL;
        (*r)->esq = NULL;
        (*r)->val = v;
        N++;
        return;
    }

    if (v > (*r)->val)
        insere(&(*r)->dir, v);
    else
        insere(&(*r)->esq, v);
}

void remover(No **r, char v)
{
}

void imprime(No *r)
{
    i++;
    printf("%c", r->val);
    if (i != N)
        printf(" ");
    else
        printf("\n");
}

void pre(No *r)
{
    if (!r)
        return;

    imprime(r);
    pre(r->esq);
    pre(r->dir);
}

void pos(No *r)
{
    if (!r)
        return;

    pos(r->esq);
    pos(r->dir);
    imprime(r);
}

void em(No *r)
{
    if (!r)
        return;

    em(r->esq);
    imprime(r);
    em(r->dir);
}

int main()
{
    No *r = NULL;
    string str;
    while (getline(cin, str))
    {
        i = 0;
        if (str == "INFIXA")
            em(r);
        else if (str[0] == 'I')
            insere(&r, str[2]);
        else if (str == "PREFIXA")
            pre(r);
        else if (str == "POSFIXA")
            pos(r);
        else if (str[0] == 'P')
        {
            if (pesquisa(r, str[2]))
                cout << str[2] << " existe" << endl;
            else
                cout << str[2] << " nao existe" << endl;
        }
    }
    return 0;
}