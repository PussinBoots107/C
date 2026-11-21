#include <stdio.h>
#include <string.h>
void indian(){
    printf("Namaste!");
}
void french(){
    printf("Bonjour!");
}
int main()
{
    char nationality[50];
    
    printf("Whats your nationality? French or Indian?\n");
    scanf("%49s", nationality);
    
    if(strcmp(nationality, "Indian") == 0){
        indian();
    } 
    else if(strcmp( nationality, "French") == 0){
        french();
    }
    else{
        printf("nationality not recognized");
    }
    
}

