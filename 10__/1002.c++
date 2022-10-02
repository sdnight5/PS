#include <stdio.h>

int Gg(int x, int y)
{
    int r;
    while (y!=0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main()
{
    int a[15],N;
    int G,L;

    scanf("%d",&N);

    for (int i = 0; i < N; i++){
        scanf("%d",&a[i]);
    }

    G = L = a[0];

    for (int i=1; i < N; i++) {
        G = Gg(G, a[i]);
        L = L / Gg(L, a[i]) * a[i];
    }

    printf("%d %d\n",G,L);

    return 0;
}