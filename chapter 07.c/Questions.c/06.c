// Create a 2D array, storing the tables of 2 & 3.

#include <stdio.h>

void store_tables(int arr[2][10], int n, int m){  // n is number of tables, m is number of multiples
    for (int i=0; i<n; i++){  // i is the table number
        for (int j=0; j<m; j++){ // j is the multiple number 
            arr[i][j] = (i+2) * (j+1);
        }
    }
}

int main (){
    int tables[2][10];
    void store_tables(int tables[2][10], int n, int m);

    store_tables(tables, 2, 10);
    for (int i=0; i<2; i++){
        for (int j=0; j<10; j++){
            printf("%d\t", tables[i][j]);
        }
        printf("\n");
    }
    return 0;
}