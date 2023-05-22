#include <stdio.h>


int main() {
    int m, n ;
    int i , j ;
    int matriz[i][j];

    printf("MATRIZ M X N\n");
    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &m);
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &n);
    

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
             matriz[i][j] = 0;
         
        }  

    }

     for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");

    }


  
    
    return 0;
}
