#include <stdio.h>
int main() {
    int pin, savedPin = 1234;

    printf("Enter ATM PIN: ");
    scanf("%d", &pin);

    if(pin == savedPin)
        printf("Access Granted");
    else
        printf("Wrong PIN");
    return 0;
}
// output
// Enter ATM PIN: 1234
// Access Granted
// Enter ATM PIN: 2314
// Wrong PIN