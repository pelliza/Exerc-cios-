#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int size = 2 * n - 1;
    int pattern[size][size];

    for (int i = 0; i < n; i++) {
        for (int j = i; j < size - i; j++) {
            for (int k = i; k < size - i; k++) {
                pattern[j][k] = n - i;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%c ", pattern[i][j] + '0');
        }
        printf("\n");
    }

    return 0;
}
