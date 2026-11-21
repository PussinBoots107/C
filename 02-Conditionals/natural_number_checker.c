#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    /*
       This exercise uses the convention that natural numbers are
       positive integers: 1, 2, 3, ...
    */
    if (number > 0) {
        printf("%d is a natural number.\n", number);
    } else {
        printf("%d is not a natural number.\n", number);
    }

    return 0;
}
