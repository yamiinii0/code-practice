#include <stdio.h>

int main (){
    int a;
    printf(" enter a:");
    scanf("%d", &a);

    switch (a) {
        case 1:
            printf(" you entered one\n");
            break;
        case 2:
            printf(" you entered two\n");
            break;
        case 3:
            printf(" you entered three\n");
            break;
        default:
            printf(" you entered a number other than 1, 2, or 3\n");
    }

    return 0;
}