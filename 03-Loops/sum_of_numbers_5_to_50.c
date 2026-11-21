#include <stdio.h>
#include <string.h>

int main()
{
    int i, sum=0;
    
    for(i=5; i<=50; i++)
    {
    sum += i;
    }
    printf("%d", sum);
    return 0;
}
