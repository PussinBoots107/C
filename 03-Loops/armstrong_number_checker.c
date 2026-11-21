#include <stdio.h>

int integer_power(int base, int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main(void)
{
    int number;
    int original;
    int temp;
    int digit_count = 0;
    int sum = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    original = number;
    temp = number;

    /* Count the digits. Zero has one digit. */
    if (temp == 0) {
        digit_count = 1;
    } else {
        while (temp > 0) {
            digit_count++;
            temp /= 10;
        }
    }

    /* Add each digit raised to the number of digits. */
    temp = number;

    if (temp == 0) {
        sum = 0;
    } else {
        while (temp > 0) {
            int digit = temp % 10;
            sum += integer_power(digit, digit_count);
            temp /= 10;
        }
    }

    if (sum == original) {
        printf("%d is an Armstrong (narcissistic) number.\n", original);
    } else {
        printf("%d is not an Armstrong (narcissistic) number.\n", original);
    }

    return 0;
}
