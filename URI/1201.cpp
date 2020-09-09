#include <bits/stdc++.h>

using namespace std;

typedef struct No
{
    int val;
    struct No *dir;
    struct No *esq;
} No;

int N, i;

No *pesquisa(No *r, int v)
{
    if (!r)
        return r;

    if (r->val == v)
        return r;

    if (r->val > v)
        return pesquisa(r->esq, v);

    return pesquisa(r->dir, v);
}

void insere(No **r, int v)
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

void remover(No **r, int v)
{
    if (!*r)
        return;

    if ((*r)->val != v)
    {

        if ((*r)->val > v)
            remover(&(*r)->esq, v);
        else
            remover(&(*r)->dir, v);

        return;
    }

    if (!(*r)->dir && !(*r)->esq)
    {
        free(*r);
        *r = NULL;
        N--;

        return;
    }

    No *aux;

    if (!(*r)->dir)
    {
        aux = (*r)->esq;
        free(*r);
        *r = aux;
        N--;
    }
    else if (!(*r)->esq)
    {
        aux = (*r)->dir;
        free(*r);
        *r = aux;
        N--;
    }
    else
    {
        No **m = &(*r)->esq;
        while ((*m)->dir)
        {
            m = &(*m)->dir;
        }

        (*r)->val = (*m)->val;

        remover(m, (*m)->val);
    }
}

void imprime(No *r)
{
    i++;
    printf("%d", r->val);
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
    int val;
    while (cin >> str)
    {
        i = 0;
        if (str == "INFIXA")
            em(r);
        else if (str[0] == 'I')
        {
            cin >> val;
            insere(&r, val);
        }
        else if (str == "PREFIXA")
            pre(r);
        else if (str == "POSFIXA")
            pos(r);
        else if (str[0] == 'P')
        {
            cin >> val;
            if (pesquisa(r, val))
                cout << val << " existe" << endl;
            else
                cout << val << " nao existe" << endl;
        }
        else
        {
            cin >> val;
            remover(&r, val);
        }
    }
    return 0;
}