#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * (n - i - 1); j++)
            printf(" ");
        for (int k = 0; k < 2 * i + 1; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}