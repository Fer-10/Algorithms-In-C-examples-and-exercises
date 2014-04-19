#include <stdio.h>

int search(int[], int, int, int);

int main(int argc, const char *argv[])
{
    int i = -1, n, v;
    int a[100];

    printf("Enter number:  ");
    while(!feof(stdin))
        scanf("%d ", &a[++i]);
    n = i+1;
    printf("\nEnter the number to search: ");
    scanf("%d", &v);
    printf("%d\n", search(a, v, 1, n));
    return 0;
}

int search(int a[], int v, int l, int r)
{
    int i;
    for (i = l; i <= r ; i++) {
        if (v == a[i]) {
            return i;
        }
    }
    return -1;
}
