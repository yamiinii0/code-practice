// Write  a function that prints Namaste if user is indian and bonjour is french.

#include <stdio.h>
void printNamaste(){
    printf("Namaste !\n");
}
void printBonjour(){
    printf("Bonjour !\n");
}

int main (){
    printf("Enter i for indian and f for french : ");
        char ch;
        scanf("%c", &ch);
        if (ch == 'i')
             printNamaste();
        else if (ch == 'f')
             printBonjour();
        
    return 0;
}