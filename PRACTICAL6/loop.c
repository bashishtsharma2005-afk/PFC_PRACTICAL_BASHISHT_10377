#include <stdio.h>
int main() {
    int a, b, i;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    for(i = a; i <= b; i++) {
        printf("%d ", i);
    }
    return 0;
}
// output
// Enter a and b: 2 6
// 2 3 4 5 6 