#include <stdio.h>
#include <string.h>

typedef struct address {
    int housenum;
    int block;
    char city[100];
    char state[100];
} folks;

int main()
{
    folks s1 = {101, 2820, "Patna", "Bihar"};
    folks s2 = {107, 2380, "Varanasi", "Uttar PRadesh"};
    folks s3 = {102, 3637, "Chandigarh", "Chandigarh"};
    folks s4 = {192, 3884, "Gorakhpur", "Uttar Pradesh"};

    printf("Person 1:\n");
    printf("House Number: %d\n", s1.housenum);
    printf("Block: %d\n", s1.block);
    printf("City: %s\n", s1.city);
    printf("State: %s\n\n", s1.state);

    printf("Person 2:\n");
    printf("House Number: %d\n", s2.housenum);
    printf("Block: %d\n", s2.block);
    printf("City: %s\n", s2.city);
    printf("State: %s\n\n", s2.state);

    printf("Person 3:\n");
    printf("House Number: %d\n", s3.housenum);
    printf("Block: %d\n", s3.block);
    printf("City: %s\n", s3.city);
    printf("State: %s\n\n", s3.state);

    printf("Person 4:\n");
    printf("House Number: %d\n", s4.housenum);
    printf("Block: %d\n", s4.block);
    printf("City: %s\n", s4.city);
    printf("State: %s\n", s4.state);

    return 0;
}
