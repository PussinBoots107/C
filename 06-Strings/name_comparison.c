#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];

    printf("Enter your name: ");
    if (scanf("%49s", name) != 1) {
        printf("Could not read a name.\n");
        return 1;
    }

    if (strcmp(name, "Mitika") == 0 || strcmp(name, "mitika") == 0) {
        printf("You are pretty.\n");
    } else if (strcmp(name, "Shantanu") == 0 ||
               strcmp(name, "shantanu") == 0) {
        printf("You are handsome.\n");
    } else {
        printf("Name not recognised.\n");
    }

    return 0;
}
