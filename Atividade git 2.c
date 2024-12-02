#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            printf("%d ", n - (i < j ? (i < 2 * n - 2 - j ? i : 2 * n - 2 - j) : (j < 2 * n - 2 - i ? j : 2 * n - 2 - i)));
        }
        printf("\n");
    }

    return 0;
}
