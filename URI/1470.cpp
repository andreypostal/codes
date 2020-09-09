#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M, V[2][20], R[20], AUX[2][20];

    while (scanf("%d", &N) != EOF)
    {
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &V[0][i]);
            V[1][i] = V[0][i];
        }

        scanf("%d", &M);

        for (int i = 0; i < M; i++)
        {
            scanf("%d", &R[i]);
        }

        int dobras = N / M;
        int K = (N - (M * dobras));
        if (K == 0)
            K = 1;

        bool r11 = true, r12, r21, r22;
        if (N != M)
        {
            for (int j = 0; j < dobras; j++)
            {
                r11 = true, r12 = true, r21 = true, r22 = true;
                for (int i = 0; i < N - K; i++)
                {
                    int v1 = ((i < K) ? V[0][(K + K - i - 1)] + V[0][i] : V[0][i + K]);
                    int v2 = V[1][N - K - i - 1] + ((i < K) ? V[1][(N - K + i)] : 0);

                    //cout << v1 << " a " << v2 << endl;
                    //cout << dobras << " db " << j << endl;
                    if (v1 != R[i] && j + 2 >= dobras)
                        r11 = false;
                    if (v1 != R[M - i - 1] && j + 2 >= dobras)
                        r12 = false;

                    if (v2 != R[M - i - 1] && j + 2 >= dobras)
                        r21 = false;
                    if (v2 != R[i] && j + 2 >= dobras)
                        r22 = false;

                    AUX[0][i] = v1;
                    AUX[1][i] = v2;

                    if (!(r11 || r12 || r21 || r22) && j + 2 >= dobras)
                        break;
                }
                N -= K;
                for (int i = 0; i < N; i++)
                {
                    V[0][i] = AUX[0][i];
                    V[1][i] = AUX[1][i];
                }
                if (N - K < M)
                    break;
            }
        }
        if (r11 || r12 || r21 || r22)
            printf("S\n");
        else
            printf("N\n");
    }

    return 0;
}