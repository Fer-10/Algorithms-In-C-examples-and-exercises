#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef int Number;
Number randNum()
{
    return random();
}

int main(int argc, const char *argv[])
{
    int i, N = atoi(argv[1]);
    float m1 = 0.0, m2 = 0.0;
    Number x;
    for (i = 0; i < N; i++) {
        x = randNum();
        m1 += ((float) x)/N;
        m2 += ((float) x*x)/N;
    }
    printf("       Average: %lf\n", m1);
    printf("Std. deviation: %lf\n", sqrt(m2-m1*m1));
    return 0;
}
