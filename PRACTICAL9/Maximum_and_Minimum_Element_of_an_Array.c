#include <stdio.h>

int main() {
    int a[50], n, i, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = min = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
// output
// Enter number of elements: 9
// Enter array elements:
// 2 3 5    
// 4 5 7 
// 2 0 7
// Maximum element = 7
// Minimum element = 0