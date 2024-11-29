#include <stdio.h>

int main() {
    int a, b;
    float x, y;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);

    int soma_int = a + b;
    int diferenca_int = a - b;

    float soma_float = x + y;
    float diferenca_float = x - y;

    printf("%d %d\n", soma_int, diferenca_int);
    printf("%.1f %.1f\n", soma_float, diferenca_float);

    return 0;
}
