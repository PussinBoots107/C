#include <stdio.h>
#include <string.h>

int main()
{
    char word[107];
    int i, palindrome = 1;

    printf("Enter your word: ");
    scanf("%106s", word);

    int length = strlen(word);

    // Checking if the word is palindrome or not
    for (i = 0; i < length / 2; i++)
    {
        if (word[i] != word[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
    {
        printf("The word is a palindrome.");
    }
    else
    {
        printf("The word is not a palindrome.");
    }

    return 0;
}
