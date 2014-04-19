#include <stdio.h>
#define N 10000

int main(int argc, const char *argv[])
{
    int i, p, q, t, id[N];
    for (i = 0; i < N; i++) {
        id[i] = i;
    }
    while (scanf("%d %d\n", &p, &q) == 2)
    {
        if (id[p] == id[q]) {
            continue;
        }
        for (t = id[p], i = 0; t = id[p], i < N; i++) {
            if (id[i] == t) {
                id[i] = id[q];
            }
        }
        for (i = 0; i < 10; i++) {
            printf("%d ", id[i]);
        }
    }
    return 0;
}
