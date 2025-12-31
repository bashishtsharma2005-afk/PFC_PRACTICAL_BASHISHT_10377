#include <stdio.h>

int main() {
    int a[50], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0)
            sum = sum + a[i];
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}
