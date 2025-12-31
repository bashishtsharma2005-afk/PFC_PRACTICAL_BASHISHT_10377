#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, sum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        sum = 0;
        for(j = 0; j < c; j++) {
            sum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
// output
// Enter rows and columns: 3 4
// Enter elements:
// 2 3 4 1
// 3 4 8 9
// 9 8 7 5
// Sum of row 1 = 10
// Sum of row 2 = 24
// Sum of row 3 = 29
