// create a string firstName & lastName to store  details of user and print all the characters using loop.

#include <stdio.h>

void printString(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){   // very important condition
        printf("%c\t", arr[i]);
    }
}

int main (){
    char firstName[] = "yamini";
    char lastName[] = "rajak";
    
    printString(firstName);
    printf("\n");
    printString(lastName);
    
    return 0;
}