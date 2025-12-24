#include <stdio.h>
int main() {
    int i, n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 != 0)
            continue;
        sum += i;
    }
    printf("Sum of even numbers = %d", sum);
    return 0;
}
// output
// Enter n: 56
// Sum of even numbers = 812