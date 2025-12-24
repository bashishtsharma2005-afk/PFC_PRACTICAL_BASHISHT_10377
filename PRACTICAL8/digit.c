#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Sum of digits = %d", sumOfDigits(n));
    return 0;
}
// output
// Enter number: 34
// Sum of digits = 7