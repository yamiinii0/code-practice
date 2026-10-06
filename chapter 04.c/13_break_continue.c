#include <stdio.h>

int main (){
    for (int i = 0; i < 20; i++)
    {
       if (i == 5){
        // break;   // completely exit the loop now!
        continue; // skip the particular iteration now !
       }
      printf("%d\n",i);
    }
    

    return 0;
}