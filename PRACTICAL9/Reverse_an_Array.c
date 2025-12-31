#include <stdio.h>

int main() {
    int a[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}
// output
// Enter number of elements: 9
// Enter array elements:
// 2 3 4 
// 4 5 6
// 8 9 5
// Reversed array:
// 5 9 8 6 5 4 4 3 2