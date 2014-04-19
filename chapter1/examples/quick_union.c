#include <stdio.h>
#define N 1000

int main(int argc, const char *argv[])
{
    int i, j, p, q, id[N];
    for (i = 0; i < N; i++) {
        id[i] = i;
    }
    while (scanf("%d %d\n", &p, &q) == 2) {
        for (i = p; i != id[i]; i = id[i]);
        for (j = q; j != id[j]; j = id[j]);
        if (i == j) {
            continue;
        }
        id[i] = j;
        printf("%d %d\n", p, q);
        for (i = 0; i < 10; i++) {
            printf("%d ", id[i]);
        }
    }

    return 0;
}
