#include <stdio.h>

int main(void)
{
    double number;

    printf("Enter a number: ");
    if (scanf("%lf", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    /*
       This checks the numeric value, not the spelling of the input.
       For example, both 5 and 5.0 are mathematically integer-valued.
    */
    if (number == (long long)number) {
        printf("The value is an integer-valued number.\n");
    } else {
        printf("The value has a fractional part.\n");
    }

    return 0;
}
