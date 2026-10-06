// \n --> new line
// \t --> tab
// \0 --> null character

/* strings --->
-- A character array terminated by '\0' null character denotes string termination.
-- example - char name[] = {'Y','A','M','I','N','I','\0'}; */


#include <stdio.h>

int main (){
    char name[] = {'Y','A','M','I','N','I','\0'};
    // char name[] = "yamini";
    printf("%c", name[0]);  // print the null character '\0'
    return 0;
}