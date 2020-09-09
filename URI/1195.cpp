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
    int C;
    scanf(" %d", &C);
    for (int j = 1; j <= C; j++)
    {
        No *r = NULL;

        int n, aux;
        scanf(" %d", &n);
        N = 0;
        while (n--)
        {
            scanf(" %d", &aux);
            insere(&r, aux);
        }
        printf("Case %d:\n", j);
        printf("Pre.: ");
        i = 0;
        pre(r);
        printf("In..: ");
        i = 0;
        em(r);
        printf("Post: ");
        i = 0;
        pos(r);
        printf("\n");
    }
    return 0;
}