// Write a program in C to print all the letters in english alphabet using a pointer.

#include <stdio.h> 
void printAlphabet() {
    char alphabet[26];
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 'A' + i;
    }
    for (int i = 0; i < 26; i++) {
        printf("%c ", alphabet[i]);
    }
    printf("\n");
}
int main (){
    printAlphabet();
    return 0;
}